#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*Casting function of N random numbers*/
int * getRandom();

int main(void)
{
  int N = 10;
  int *p;
  int i;

  p=getRandom(); //initial array adress to pointer p
  printf("\n main \n");
  for (i = 0; i < N; ++i) {
    printf("*(p+%d): %d\n", i, *(p+i));
    
  }

  
  return 0;
}



int * getRandom(){

  static int r[10];
  int i;

  /*seed*/
  srand((unsigned)time(NULL));

  for (i = 0; i < 10; i++) {
    r[i] = rand();
    printf("%d \t %d\n", i, r[i]);
  }

  return r;
}
