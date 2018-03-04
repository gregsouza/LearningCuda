#include <stdio.h>

int main(void)
{
  /*One can acess the location of a variable using the & operator*/

  int var1;
  char var2[10];

  printf("The adress of var1 is %p\n", &var1 );
  printf("the adress of var2 is %p\n", &var2 );
  // %p prints pointers
  return 0;
}

