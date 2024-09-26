#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main()
{
    char number[20], *result;

      //reading the number
    printf("Enter the number: " );
    result = fgets(number, 20, stdin);

    if (result == NULL)
      return 1;

      // START of the conversion
      char* end_ptr;
      errno = 0;
      int num = strtol(number, &end_ptr, 10);

      if (errno == ERANGE)
            return 1; // There is an Error

      if(end_ptr == number)
            return 2; // No character readed - range error

      if ((*end_ptr != '\0' ) && (*end_ptr != '\n'))
            return 3; // No full string readed - characters instead of numbers

      printf("Readed number: %d\n", num);


    return 0;
}
