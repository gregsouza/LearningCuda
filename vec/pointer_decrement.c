#include <stdio.h>

const int MAX = 3;

int main(void)
{
  int var[] = {10,100,200};
  int i, *ptr;

  /* lets make the pointer point to the ending of the
     array adress */
  ptr = &var[MAX-1];

  for (i = MAX; i > 0; i--) {
    printf("Adress of var[%d] = %p\n",i,ptr );
    printf("Value of var[%d] = %d\n", i, *ptr );

    ptr--;
  }

  
  return 0;
}

