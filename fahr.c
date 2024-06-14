#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */

int main(void){

  float fahr,celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
// exercise 1-3 - Modify program to print heading above the table
  fahr = lower;
  char *fahrenheitH = "*F";
  char *celsiusH = "*C";
  printf("%3s %6s \n", fahrenheitH, celsiusH);
  while(fahr <= upper){
    celsius = (5.0/9.0)*(fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

}
