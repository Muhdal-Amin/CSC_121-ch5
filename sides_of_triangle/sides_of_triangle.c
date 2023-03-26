// Paul Dietel, C-How to program : Chapter5, Exercise 5.17
// Structure and Functions in C

#include <stdio.h>
#include <math.h>

//Function prototype and definition
int SidesOfRightTriangle (int side1, int side2, int side3) {
  if ( (side1*side1) == side2*side2 + side3*side3) {

    return 1; //it is a right angle triangle

  }

  else if ( (side2 *side2) == side1*side1 + side3*side3) {

    return 1; //it is a right angle triangle

  }

  else if ( (side3*side3) == side1*side1 + side2*side2) {

    return 1; //it is a right angle triangle

  }

  else {

    return 0; //it is not a right angle triangle

  }

}// End function

// Function main - Code entry point
int main(void) {

  // Initialization phase
  // Variable declaration
  int a, b, c;
  int list = 1;

  // sentinel controlled loop
  while (1) {

    // Processing phase
    // Prompts user for input
    printf("Right Triangle #%d\n", list++);
    printf("Enter side #1 (Any character to quit): ");

    if (scanf("%d", &a) != 1) {

      return (0);

    }// End if

    printf("Enter side #2 in (cm): ");
    scanf("%d", &b);

    printf("Enter side #3 in (cm): ");
    scanf("%d", &c);

    // Outputs an error message when wrong values are inputted
    if (a<=0 || b<=0 || c<=0) {
      
      puts("INVALID input!!!!Length of sides must be a non-zero positive integer\n");

    }// End if

    // Test for right angled triangles and function call
    else if (a > 0 || b > 0 || c > 0) {

      int isRightAngleTriangle = SidesOfRightTriangle(a, b, c);

      if ( isRightAngleTriangle == 1) { //if isRightAngleTriangle is true

	puts("The triangle is a right angle triangle.\n");

      }// End if

      else {  // if isRightAngleTriangle is false

	puts("The triangle is not a right angle triangle.\n");

      }// End else

    }// End else if
    
  }// End while

}// End function main
