#include <stdio.h>
#include <stdlib.h>



int main()
{
    int table[10] = {1,2,3,4,5,6,7,8,9,10};
    char info[2] = {'a', 'b'};

      //table with integers
    for(int i = 0; i < 10; i++)
    {
          printf("table[%d] = %d\n", i, table[i]);
    }
    //table with chars
    for(int i = 0; i < 2; i++)
    {
          printf("table[%d] = %c\n", i, info[i]);
    }
    return 0;
}
