#include <stdio.h>
#include <stdlib.h>

int main(void){
  
  //count characters in input
  double count;

  for (count = 0; getchar() != EOF; ++count){
    printf("%.0f\n", count);
  }

  return 0;
  
}
