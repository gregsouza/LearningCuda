#include <stdio.h>
#include <time.h>

//Cast function

void getSeconds(unsigned long *par);

int main(void)
{
  unsigned long sec;
  getSeconds(&sec); /*giving the adress of sec*/

  printf("Number of seconds: %ld\n", sec);
  
  return 0;
}

void getSeconds(unsigned long *par){
  //Modifing the value at the adress of the argument
  *par = time(NULL);
  
}
