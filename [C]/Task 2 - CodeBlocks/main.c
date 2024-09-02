#include <stdio.h>
#include <stdlib.h>

int main()
{
      int width = 10;
      int heigth = 5;

       // upper frame
      for(int i =0; i < width; i++)
            printf("#");
                  printf("\n");

      // middle frame
      for(int i = 0; i <heigth; i++)
      {
            printf("#        #\n");
      }

      // lower frame
      for(int i=0; i< width; i++)
            printf("#");
            printf("\n");

    return 0;
}
