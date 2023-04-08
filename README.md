# CSC_121
C - How to program 8th edition by Paul Deitel and Harvey Deitel. Chapter 5, Exercises 5.10 - 5.20

# Exercise 5.10 (Rounding Numbers)
An application of function ceil is rounding a value to the nearest integer. 

The statement;
- y = ceil (x + .5);

round the number to the nearest integer and assign the result to y. 

Write a program that reads several numbers and uses the preceeding statement to round each of these numbers to the integer. For each number processed, print both the original number and the rounded number.

# Exercise 5.11 (Rounding Numbers)
An application of function floor is rounding a number to a specific decimal point. 

The statement;
- y = floor (x * 10 + .5) / 10;

rounds x to the tenth positon (the first position to the right of decimal point).

The statement;
- y = floor (x * 100 + .5) / 100;

rounds x to the hundreth positon (the second position to the right of the decimal point).

Write a program that defines four functions to round a number x in various ways;
- roundToInteger(number)
- roundToTenths(number)
- roundToHundreths(number)
- roundToThousandths(number)

For each of the value read, your progam should print the original value, the number rounded to the nearest integer, the number rounded to the nearest tenth, the number rounded to the nearest hundredth and the number rounded to the nearest thousandth.

# Exercise 5.12 (Question File)
Answer each of the following questions;
- What is the difference between passing arguments by arguments and passing arguments by reference?
- What values does the rand function generate?
- How do you randomize a program?
- How do you scale or shift the values produced by the rand function
- What is a recursive function? 
- What is a base case?

# Exercise 5.13 (Randomizing Numbers)
Write statements that assigns random integers to the variable n in the following ranges;
- 1 <= n <= 6
- 100 <= n <= 1000
- 0 <= n <= 19
- 1000 <= n <= 2222
- -1 <= n <= 1
- -3 <= n <= 11

# Exercise 5.14 (Randomizing Numbers)
For each of the following set of integers, write a single statement that will print a number at random from the set;
- 3, 6, 9, 12, 15, 18, 21, 24, 27, 30.
- 3, 5, 7, 9, 11, 13, 15, 17, 19.
- 3, 8, 13, 18, 23, 28, 33.

# Exercise 5.15 (Hypotenuse Calculator)
Define a function called hypotenuse that calculates the length of the hypotenuse of a right angled triangle when the other two sides are given. The function should take two arguments of type double and return the hypotenuse as a double. Test your program with side values specified below.

# Exercise 5.16 (Sides of a Triangle)
Write a function that reads three non zero double values as the sides of a triangle, and calculates and returns the area of the triangle as a double variable. It should also check whether the numbers represent the sides of a triangle before calculating the area. Use this function in a program that inputs a series of sets of numbers.

| Triangle| Side 1| Side 2|
| :-------| :-----| :-----|
| 1       | 3.0   | 4.0   |
| 2       | 5.0   | 12.0  | 
| 3       | 8.0   | 15.0  |


# Exercise 4.20 - Truth Tables
Complete the following truth tables by filling in each blank with 0 or 1.
