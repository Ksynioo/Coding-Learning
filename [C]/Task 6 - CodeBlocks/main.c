#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Loop in a loop\n");
    for( int i = 0; i < 10; i++)
    {
          for (int j=0; j<10; j++)
          {
                printf("i = %d, j = %d\n", i, j);
                if (j>1)
                  break;
          }
    }
    return 0;
}
