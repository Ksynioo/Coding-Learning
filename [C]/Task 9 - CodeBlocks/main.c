#include <stdio.h>
#include <stdlib.h>

void realAdd(int* n, int to_add)
{
      *n += to_add;
}

int main()
{
      int a = 20;
      realAdd(&a, 5);
      printf("a = %d", a );

      return 0;
}
