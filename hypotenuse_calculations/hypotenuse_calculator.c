// Paul Dietel C-How to program: Chapter5, Exercise 5.15
// Structure and Functions in C

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function prototype and definition
double hypotenuse (double side1, double side2) {

  sqrt(pow(side1 , 2) + pow(side2, 2));

}

// Function main - Code entry point
int main(void) {

  // Initialization phase
  // Variable declaration
  double hyp, opp, adj;
  int trig = 1;

  // Sentinel controlled loop
  while (true) {

    printf("Triangle #%d: \n", trig++);

    printf("%s", "Enter the length of the first side (-1 to exit): ");
    scanf("%lf", &opp);

    if (opp == -1) { // Jumps out of loop once user inputs sentinel value

      return (0);

    }// End if

    printf("%s", "Enter the length of the second side: ");
    scanf("%lf", &adj);

		  
    printf("The length of the Opposite side is: %lf\n", opp);
    printf("The length of the Adjacent side is: %lf\n", adj);
    printf("The length of the Hypotenuse is calculated as: %lf\n\n", hypotenuse(opp, adj));

  }// End while

  return (0);

}// End function main
