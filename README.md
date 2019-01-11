# OS - A1

Operating Systems Design and Systems Programming

Assignment #1 - SYST 44288

C Programming Review: Taking in command line arguments

int main(int argc, char *argv[])

argv is an array of pointers of type char (i.e. array of strings). This array holds all of the arguments passed when executing the program. If your program is named 1.1.c, after it has successfully compiled you will execute the program by calling its name and then passing all necessary command line arguments. Ex. ./1.1 3 0 600000

argc is the length of this array.
- argv[0] = 1.1
- argv[1] = 3
- argv[2] = 0
- argv[3] = 600000

## Question 1
Armstrong Numbers
Number n is called Armstrong’s number of order k if it is equal to the sum of k-th powers of its digits.
For example: 371 = 33 + 7 3 + 13 Armstrong’s number of order 3. Refer to the Armstrong Numbers research paper provided for details on how Armstrong numbers work.
Write C program which prints all the Armstrong’s numbers of a given order k, within the given interval between p and q. You should use functions like pow() provided by the math library. Input: The user will type the integers k, p, and q on the command line. Taking in one integer at a time, in this order. Output should consist of a single number per line with no extra or blank lines.

## Question 2
Let n be a positive integer. Euler’s phi-function φ(n) is defined to be the number of positive integers not exceeding n that are relatively prime to n. Write a program that can be used to calculate and display the value of Euler’s phi-function for a series of positive integer, separated by spaces, entered on the command line.

## Question 3
Using pointers and avoiding unnecessary local variables, write a function, rmchr that takes a string and a character as arguments. The rmchr function should remove all occurrences of the character from the string. The rmchr function should not leave spaces characters in the string where characters have been removed. The resulting string should be returned using an appropriate data type and printed to the command line.

## Question 4
Using pointers and avoiding unnecessary local variables, write a function, rmstr that takes two strings as arguments, removing all occurrences of any character from the second string in the first string. The rmstr function should not leave spaces characters in the string where characters have been removed. The resulting string should be returned using an appropriate data type and printed to the command line.
