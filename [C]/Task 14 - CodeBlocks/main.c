#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
      //Reading the string
      char name[20], *result;
      printf("What's your name? ");
      result = fgets(name, 20, stdin);
      if(result == NULL)
            return 1;
      //Setting for end read string
      char *newline = strchr(name, '\n');
            if(newline != NULL)
                  *newline = 0;
      //printing string
      printf("Hello %s!",name);

      printf("\nYou've written: %s, length: %ld\n", name, strlen(name)); //Returns number of bytes, not characters
      for(int i=0; i < strlen(name); i++)
            printf("s[%d] = %d (%c)\n", i, name[i], name[i]);
      return 0;
}
