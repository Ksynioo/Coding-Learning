#include <stdio.h>
#include <stdlib.h>

typedef enum {dolar, hash} row_type;


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

void middleRowDollar(int width)
{
       //left frame
      printf("$");

      //empty middle
      int col_num = 2;
      do {
                  printf(" ");
            col_num++;
      }while(col_num < width);

      //right frame
      printf("$\n");
}

void middleRowHash(int width)
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

      //upper frame
      bar(width);

      //middle frame
      int row_num = 2;
      row_type rt = dolar;
      while (row_num < heigth)
      {
            if (rt == dolar)
            {
                  middleRowDollar(width);
                  rt = hash;
            }
            else
            {
                  middleRowHash(width);
                  rt = dolar;
                  row_num++;
            }
      }
      //lower frame
      bar(width);
    return 0;
}
