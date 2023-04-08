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

# Exercise 4.19 - Calculating Sales
An online retailer sells five products whose retail prices are shown in the following table:

| Product Number| Retail Prices |
| :------------ | :------------:| 
| 1             | $2.98         |
| 2             | $4.50         |  
| 3             | $9.98         | 
| 4             | $4.49         |
| 5             | $6.87         |

- Write a program that reads a series of pairs of numbers as follows:
    - Product number
    - Quantity sold for one day
    
Your program should use a switch statement to help determine the retail price for each product.

Your program should calculate and display the total retail value of all products sold lastweek.

# Exercise 4.20 - Truth Tables
Complete the following truth tables by filling in each blank with 0 or 1.
