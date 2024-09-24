#include <stdio.h>
#include <stdlib.h>

int main()
{

      char name[20];
      printf("What is your name? ");
      int result = scanf("%20s", name); //not recommended to use
      if(result != 1)
            return 1;
      printf("Hello, %s!\n", name);
    return 0;
}
