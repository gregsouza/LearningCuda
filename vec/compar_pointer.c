#include <stdio.h>

const int MAX = 5;

int main(void)
{
  int var[] = {10,100,200};
  int i, *ptr;

  /* lets make the pointer point to the array adress */
  ptr = var;
  i = 0;

  /*lets make the pointer increment until
    it hits the last adress through comparison*/
  while (ptr <= &var[MAX-1]) {
    
    printf("Adress of var[%d] = %p\n", i, ptr );
    printf("Value of var[%d] = %d\n", i, *ptr );

    ptr++;
    i++;
  }

  
  return 0;
}

