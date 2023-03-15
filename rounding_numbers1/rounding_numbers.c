// Paul Dietel C-How to program: Chapter5, Exercise 5.11
// Structure and Functions in C

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function prototypes and definitions
float roundToInteger (float number, float number1) {

  number1 = floor(number + .5);
  
}

float roundToTenths (float number, float number1) {

  number1 = floor(number * 10 + .5) / 10;

}

float roundToHundreths (float number, float number1) {

  number1 = floor(number * 100 + .5) / 100;

}

float roundToThousandths (float number, float number1) {

  number1 = floor(number * 1000 + .5) / 1000;

}// End function definition

// Function main - Code entry point
int main(void) {

  // Initializtion phase
  // Variable declaration
  float x, y;
  int z = 1;

  // Sentinel controlled loop
  while (true) {

    printf("#%d\n", z++);
    printf("%s", "Enter a number (-1 to exit): ");
    scanf("%f", &x);

    if (x == -1) {  // Jumps out of loop once sentinel value is inputted by the user

      return(0);
      
    }// End if

    printf("The original value inputted is: %.4f\n", x);
    printf("The number rounded to the nearest integer is: %.0f\n", roundToInteger(x , y));
    printf("The number rounded to the nearest Tenths is: %.1f\n",  roundToTenths(x , y));
    printf("The number rounded to the nearest Hundreths is: %.2f\n",  roundToHundreths(x , y));
    printf("The number rounded to the nearest Thousandths is: %.3f\n\n",  roundToThousandths(x , y));
    

  }// End while

  return (0);

}// End function main
