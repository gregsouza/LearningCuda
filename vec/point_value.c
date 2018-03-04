#include <stdio.h>

int main(void)
{
  int var = 20;
  int *ip;

  ip =  &var; /* store var adress in the pointer */

  printf("The adress of the var variable is %p\n", &var );

  printf("The adress of the ip pointer is %p\n", ip );

  printf("The value in ip adress is *ip = %d\n", *ip );
  
  return 0;
}
