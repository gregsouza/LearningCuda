#include <stdio.h>

int main(void)
{
  //int var =10;
  int *ptr = NULL; //Initiating pointer as null
  //ptr = &var;

  printf("The value of ptr is %p\n",ptr );

  if (!ptr) { //testing for null
    printf("ptr is null\n");
    
  }
  else {
    printf("ptr is not null \n");
  }

    
  
  return 0;
}

