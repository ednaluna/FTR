# **Factorial Tail Recursion**

  ## *Description:*
  This C++ code shows a tail-recursive factorial function. 
  Tail recursion is a technique where the recursive call is the last operation in the function,
  this can avoid stack overflow issues.

 ## *Features*
  Interactive Input
  Tail-Recursive Factorial Calculation

##  *Functions:*
  
### factorial_helper:

Purpose: An auxiliary function to facilitate tail recursion.
Parameters:
int n: The current number in the factorial calculation.
int acc: The accumulator that stores the intermediate results.
Returns: The factorial of n.
Description: If n is 0, it returns the accumulated result acc. Otherwise, it recursively calls itself with n - 1 and n * acc.

### factorial:

Purpose: The main function is to compute the factorial using tail recursion.
Parameters:
int n: The number for which the factorial is to be calculated.
Returns: The result of factorial_helper initialized with acc as 1.
main:

Purpose: Handles user interaction and output.
Description: Prompts the user for a number, calls the factorial function with that number, and prints the result.

## *Getting Started*
To run this project, you need a C++ compiler.

## *Prerequisites*
C++ Compiler: Ensure you have a C++ compiler like g++ installed.
## Compilation and Execution
Compile the Code:
  1. g++ -o factorial factorial.cpp
  2. ./factorial
     
Input: Enter a non-negative integer when prompted.
