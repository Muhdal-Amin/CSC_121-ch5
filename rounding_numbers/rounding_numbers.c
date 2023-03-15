// Paul Dietel C-How to program: Chapter5, Exercise 5.10
// Structure and Functions in C

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function main - Code entry point
int main(void) {

  // Initialization phase
  // Variable declaration
  float x, y;
  int z = 1;

  // Sentinel controlled loop
  while (true) {

    printf("#%d\n", z++);
    printf("%s", "Enter a number (-1 to exit): "); // prompts user to input value
    scanf("%f", &x);

    // Jumps out of loop when user inputs sentinel value
    if (x == -1) {

      return (0);

    }// End if

    y = ceil(x + .5);

    printf("The original value inputted is: %.2f\n", x);
    printf("The rounded down value is: %.2f\n\n", y);

  }// End while

  return (0);

}// End function main
