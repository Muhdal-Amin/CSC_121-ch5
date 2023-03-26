// Paul Dietel, C-How to program : Chapter 5, Exercise 5.19
#include <stdio.h>
#include <stdbool.h>

// Function prototype and definition
void RectangleOfAsterisks (int side1, int side2) { //function doesn't return a value, instead it prints character

  for(int breadth=1; breadth<=side2; breadth++) {
    for(int length=1; length<=side1; length++) {
      printf("*");
    }
    printf("\n");
  }
  puts("");
  
}// End function

// Function main - Code entry point
int main (void) {

  // Variable declaration
  int lengthOfRectangle, breadthOfRectangle;
  int list = 1;
  
  // Sentinel controlled loop
  while (true) {

    // Processing phase
    // Prompts user for input

    printf("Rectangle #%d\n", list++);
    printf("Enter length of rectangle (0 to quit): ");
    scanf("%d", &lengthOfRectangle);
     
    if (lengthOfRectangle == 0) {

	return (0);
	
    }// End if
    
    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadthOfRectangle);

    // Outputs an error message when wrong values are inputted
    if (lengthOfRectangle < 0 || breadthOfRectangle < 0) {
	
      puts("INVALID input!!!Length and breadth can only be non-zero positive integers.\n");

    }

    // Function call and outputs a rectangle of asterisks
    else if (lengthOfRectangle > 0 || breadthOfRectangle > 0) {
      
      RectangleOfAsterisks(lengthOfRectangle, breadthOfRectangle);
      
    }// end else if

  }// End while

}// End Function main
