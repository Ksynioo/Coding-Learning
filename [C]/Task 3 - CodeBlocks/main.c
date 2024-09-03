#include <stdio.h>
#include <stdlib.h>

void bar(int width, int height)
{
      //upper frame
      for(int i =0; i < width; i++)
            printf("#");
                  printf("\n");

      // middle frame
      for(int i = 0; i <height; i++)
      {
            printf("#        #\n");
      }

      //lower frame
      for(int i =0; i < width; i++)
            printf("#");
                  printf("\n");
}
int main()
{
      int width = 10;
      int heigth = 5;

      bar(width, heigth);



    return 0;
}
