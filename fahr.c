#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */

// #define

#define LOWER 0     // lower limit of table
#define UPPER 300   // upper limit
#define STEP 20     // step size

int main(void){
/*
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
*/

// exercise 1-5 = Modify the program to go in reverse order

int fahr;
float celsius;

for (fahr = UPPER; fahr >= LOWER; fahr-= STEP){
  
  celsius = (5.0/9.0)*(fahr-32.0);
  printf("%3d %6.1f\n", fahr, celsius); 

}

}


