#include <stdio.h> // needed for fgets
#include <string.h> // needed for strchr
#include <stdlib.h> // needed for strtol
#include <errno.h> // needed for ERRNO

void rawBar(int width)
{
      for (int i=0; i < width; i++)
            printf("#");
}

void titleBar(int width, char *title)
{
      rawBar(2);
      printf("%s", title);
      int title_len = strlen(title);
      rawBar(width - title_len - 2);
      printf("\n");
}

void bar(int width)
{
      //upper & lower frame
      for(int i =0; i < width; i++)
            printf("#");
                  printf("\n");
}
void middleRow(int width)
{
      //left frame
      printf("#");
      //empty middle
      int col_num = 2;
      do {
                  printf(" ");
            col_num++;
      }while(col_num < width);
      //right frame
      printf("#\n");
}

char* getString(char* s, int num) {
  // if s is NULL then it's not correct string
  if ( s == NULL )
    return s; // means NULL

  // reading string from stdin
  char* result = fgets(s, num, stdin);
  if ( result == NULL )
    return result; // means NULL

  // deleting newline character
  result = strchr(s, '\n');
  if ( result != NULL )
    *result = 0;

  return s;
}

int getInt(int default_value) {
  // reading string
  char s[20];
  char* result = getString(s, 20);

  // in case of error returns default value
  if ( result == NULL )
    return default_value;

  // start of conversion
  char *end_ptr;
  errno = 0;
  int num = strtol(s, &end_ptr, 10);

  if ( errno == ERANGE )
    return default_value; // there is an error - probably range of number

  if ( end_ptr == s )
    return default_value; // no character readed

  if ( (*end_ptr != '\0') && (*end_ptr != '\n') )
    return default_value ; //no string readed - there was characters instead of number

  return num;
}

int promptInt(char*msg, int default_value)
{
      printf("%s (default: %d): ", msg, default_value);
      return getInt(default_value);
}

void promptString(char *msg, char *default_string, char *s, int num)
{
      printf("%s (default: %s): ", msg, default_string);
      s = getString(s, num);

      //If the string was readed correctly and it has characters,
      //then function needs to end
      if((s != NULL) && (strlen(s) > 0))
            return;
      //if not then copy the default string
      strncpy(s, default_string, num);

}


int main()
{
    int width = promptInt("Enter the width of the window", 10);
    int height = promptInt("Enter the height of the window", 10);

      char string[20];
      promptString("Enter the name of the window", "Window", string, 20);

      //upper frame
    titleBar(width, string);

    //middle frame
    for(int row_num = 2; row_num < height; row_num++)
    {
          middleRow(width);
    }

    //lower frame
    bar(width);
    return 0;
}
