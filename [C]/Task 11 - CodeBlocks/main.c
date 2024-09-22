#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[] = "This is a string";

    printf("%s\n", string);

    for(int i=0; i<16; i++)
    {
          printf("string[%d] = '%c' \n", i, string[i]);
    }
    return 0;
}
