#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b = 100;

    int *ptr_int = &a;

      printf("a = %d\n", a);
      printf("b = %d\n\n", b);
      printf("pointer a:\n");
      printf("ptr_int = %d\n\n", *ptr_int); //dereference pointer

      ptr_int = &b;
      printf("pointer b:\n");
      printf("ptr_int = %d\n", *ptr_int); //dereference pointer
    return 0;
}
