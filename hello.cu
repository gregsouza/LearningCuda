#include <stdio.h>
/* Host = CPU stuff
   Device = GPU Stuff
 */

__global__ void mykernel(void){
  /*global indicates a function that runs on device called from
    host */
} 


int main(void)
{
  mykernel<<<1,1>>>(); //Calls from host to device
  printf("hello world! \n");
  return 0;
}
