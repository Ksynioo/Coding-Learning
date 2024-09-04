#include <stdio.h>
#include <stdlib.h>

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
int main()
{
      int width = 10;
      int heigth = 10;

      bar(width);

      int row_num = 2;
      while (row_num < heigth)
      {
            if (row_num % 2 == 0)
                  middleRow(width);
                  row_num++;
      }

      bar(width);



    return 0;
}
