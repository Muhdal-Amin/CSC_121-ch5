// Paul Dietel, C-How to program : Chapter 5, Exercise 5.18
// Structure and Functions in C

#include <stdio.h>
#include <stdbool.h>

// Function prototype and definition
int EvenOrOdd (int num) {
  
  if (num % 2 == 0) {

    return 1; //it is an even number

  }// End if
  
  else {
    
    return 0; //It is an odd number

  }// End else

}// End function

// Function main - Code entry point
int main(void) {

  // Variable declaration
  int x;

  // Sentnel controlled loop
  while (true) {

    printf("Enter a number(0 to quit): ");
    scanf("%d", &x);

    if (x == 0) {

      return (0);
      
    }// End if
    

    //test if number inputted is even or odd

    int isEvenOrOdd = EvenOrOdd(x);

    if (isEvenOrOdd == 1) { //if isEvenOrOdd is true

      printf("%d is an even number.\n\n" ,x);

    }// End if
    
    else { //if isEvenOrOdd is true

      printf("%d is an odd number.\n\n", x);

    }// End else
    
  }// End while

}// End function main
