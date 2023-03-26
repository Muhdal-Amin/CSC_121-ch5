// Paul Dietel, C-How to program : Chapter 5, Exercise 5.20
// Structure and Functions in C

#include <stdio.h>
#include <stdbool.h>

// Function definition and prototype
void RectangleOfAnyCharacter (int side1, int side2, char fillCharacter) { //function doesn't return a value, instead it prints character

  for(int breadth=1; breadth<=side2; breadth++){
    for(int length=1; length<=side1; length++){
      printf("%c", fillCharacter);
    }
    printf("\n");
  }
  puts("");
  
}// End function


// Function main - Code entry point
int main (void) {

  // Variable declaration
  int lengthOfRectangle, breadthOfRectangle;
  char anyCharacter;
  int list = 1;

  // Sentinel controlled loop
  while (true) {

    // Processing phase
    // Prompts user for input
    printf("Rectangle #%d\n", list++);
    
    printf("Enter length of rectangle (0 to quit): ");
    scanf("%d", &lengthOfRectangle);

    if (lengthOfRectangle == 0) { // Jumps out of loop once user inputs sentinel value

      return (0);

    }// End if
    
    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadthOfRectangle);
    getchar(); //consume any leftover newline characters in the input buffer

    printf("Enter any character: ");
    scanf("%c", &anyCharacter);

    // Outputs an error message when wrong values are inputted
    if (lengthOfRectangle < 0 || breadthOfRectangle < 0) {
      
      puts("INVALID input!!!Length and breadth can only be positive integers.\n");

    }// End if

    // Function call and outputs the a rectangle of characters
    else if (lengthOfRectangle > 0 || breadthOfRectangle > 0) {
      
      RectangleOfAnyCharacter(lengthOfRectangle, breadthOfRectangle, anyCharacter);

    }// End else

  }// End while

}// End Function main
