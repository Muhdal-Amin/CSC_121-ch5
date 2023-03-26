// Paul Dietel , C-How to program : Chapter5, Exercise 5.16 
// Structure and Functions in C

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function prototype and definition
double areaOfTriangle (double side1, double side2, double side3) {
  
  double s = (side1 + side2 + side3) / 2.0;
  double area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
  
  return area;

}// End function


// Function main - Code entry point
int main (void) {

  // Initialization phase
  // Variable declaration
  double sideA, sideB, sideC;
  int list = 1;
  
  // Sentinel controlled loop
  while (1) {

    // Processing phase
    // Prompts user for input
    printf("Triangle #%d:\n", list++);
    printf("Enter side #1 (Any character to quit): ");
    
    if (  scanf("%lf", &sideA) != 1) { // Jumps out loop once user inputs sentinel value

	return (0);

      }
    
    printf("Enter side #2 in (cm): ");
    scanf("%lf", &sideB);
    
    printf("Enter side #3 in (cm): "); 
    scanf("%lf", &sideC);

    // Outputs an error message once user inputs wrong values
    if (sideA <= 0 || sideB <= 0 || sideC <= 0) {

      puts("\nINVALID input!!!! The length of sides must be a positive non-zero integer.\n");

    }// End if

    // Checks if the inputted sides form a triangle and outputs an error message if they don't form a triangle
    else if ( sideA+sideB < sideC || sideA+sideC < sideB || sideB+sideC < sideA) {
      
      printf("The inputted sides do not form a triangle!\n\n");

    }// End else if

    // Outputs the area of the triangle
    else {

      printf("Area of the triangle is: %.2lf cm^2.\n\n", areaOfTriangle(sideA, sideB, sideC));

    }// End else

  }// End while

}// End Function main
