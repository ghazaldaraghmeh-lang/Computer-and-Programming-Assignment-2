# Computer-and-Programming-Assignment-2
Assuming that a balanced number is defined as a number that has an equal sum of odd and even digits as well as an equal count of odd and even digits. 
(e.g. The number 2365 is balanced since it has 2 odd digits and 2 even digits and the sum of both the odd and even digits is the same = 8).

Write a complete C program that asks the user to enter any two different positive integers x and y
( you may assume that x is always less than y.  DO NOT check. ). 
Your program should then find and display all the balanced numbers from x to y (inclusive).

Requirements

Your program should at least have and use the following three Boolean functions (A Boolean function is a function that returns an integer (int) value of 1 (true) or 0 (false)):

1-	hasEqualDigitSum  which takes any integer as any argument and returns whether it has equal sum of even and odd digits or not.

2-	hasEqualDigitCount  which takes any integer as an argument and returns whether it has equal count of even and odd digits or not.

3-	isBalanced which takes any integer as an argument and uses the above two functions to return whether the given integer is balanced or not.

How to Run

Compile the program using a C compiler:

gcc main.c -o main

Run the program:

./main

On Windows, run the generated executable:

main.exe

Example of a Sample run:  

Enter any two positive numbers x and y:
5966   6149

The balanced numbers from 5966 to 6149 are:
5968
5986
6015
6033
6051
6105
6127
6149

