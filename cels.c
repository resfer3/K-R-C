#include <stdio.h>

int main(void){
  
  // Exercise 1-4
  // Celsius to Fahrenheint - floating point
  // 0 to 100 *C

  float celsius, fahr;
  float lower, upper, step;

  lower = -50;
  upper = 50;
  step = 10;

  char *celsius_H = "*C";
  char *fahr_H = "*F";
  
  celsius = lower;
  printf("%3s %6s\n", celsius_H, fahr_H);
  while(celsius <= upper){

   fahr = (celsius * 9/5) + 32;
   printf("%3.0f -> %6.0f\n", celsius, fahr);
   celsius += step;

  }

}
