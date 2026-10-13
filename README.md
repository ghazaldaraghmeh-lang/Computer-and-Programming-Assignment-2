# COMP133 – Assignment 2

## Description
Assuming that a **balanced number** is defined as a number that has an equal sum of odd and even digits as well as an equal count of odd and even digits. 
(e.g. The number 2365 is balanced since it has 2 odd digits and 2 even digits and the sum of both the odd and even digits is the same = 8).

Write a complete C program that asks the user to enter any two different positive integers x and y

( you may assume that x is always less than y.  DO NOT check. ). 

Your program should then find and display all the balanced numbers from x to y (inclusive).


## Requirements
Your program should at least have and use the following three Boolean functions (A Boolean function is a function that returns an integer (int) value of 1 (true) or 0 (false)):
- `hasEqualDigitSum()` – Checks whether the sum of even digits equals the sum of odd digits.
- `hasEqualDigitCount()` – Checks whether the number of even digits equals the number of odd digits.
- `isBalanced()` – Determines whether a number is balanced using the previous two functions.

## How to Run
1. Compile the program using a C compiler:
   ```bash
   gcc main.c -o main
   ```
2. Run the program:
   ```bash
   ./main
   ```

On Windows, run the generated executable:
```bash
main.exe
```

## Example of a Sample run:  
**Input:**
```text
5966 6149
```

**Output:**
```text
The balanced numbers from 5966 to 6149 are:
5968
5986
6015
6033
6051
6105
6127
6149
```


