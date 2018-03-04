#include <stdio.h>

int main(void)
{
  int var=3007;
  int *ptr;
  int **pptr; // Pointer to a pointer

  //Take the adress of var
  ptr = &var;
  //Take the adress of ptr
  pptr = &ptr;

  printf("Value of var = %d\n", var );
  printf("Value at *ptr = %d\n", *ptr );
  printf("Value at **pptr = %d\n",**pptr );
  
  return 0;
}

