#include <stdio.h>

const int MAX = 3;

int main(void)
{
  int var[] = {17, 27, 57};
  int i, *ptr[MAX];

  /*Let's make each element of ptr[] store the
    adrees of the equivalent element of var[]*/
  for (i = 0; i < MAX; i++) {
    ptr[i] = &var[i];
  }

  for(i = 0; i < MAX; i++) {
    printf("Value of var[%d] = %d stored at %p\n", i, *ptr[i], ptr[i]);
    
  }


  
  return 0;
}

