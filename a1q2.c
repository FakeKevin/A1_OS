/* Assignment 1 Question 2
Keun Young Jee */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int checkPrime(unsigned int);
int phi(unsigned int);
int gcd(int, int);

int main(int argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		if (checkPrime(atoi(argv[i])) != 0)
		{
			int prime = atoi(argv[i]) - 1;
			printf("phi(%d) = %d\n", atoi(argv[i]), prime);
		}
		else
		{
			phi(atoi(argv[i]));
			printf("phi(%d) = %d\n", atoi(argv[i]), phi(atoi(argv[i])));
		}
	}
}
		/* The function checkPrime is used first to
		check if the user input number is prime and if it
		is prime, it takes k - 1 according to eulers function
		and returns that number as the answer */
int checkPrime(unsigned int n)
{
	for (int i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
		/* The function returns zero to prompt the
		the program to continue to the phi function */
			return 0;
		}
	}
	return n;
}

		/* If the user input is not prime, it passes to
		this function where it passes the input through
		another function called gcd which calculates the
		greatest common divisor. The gcd calculates the
		relative prime numbers between from the user input
		and half of input. When the relative prime numbers are
		found, the result counter increments by 1 and returns
		the final count back to the main function */
int phi(unsigned int n)
{
	unsigned int result = 1;

	for (int i = 2; i < n; i++)
	{
		/* The user input and the numbers between the input
		and 2 goes through the gcd function. It starts at 2
		because 0 is not defined and will not be relatively prime
		to any number. 1 on the other hand will be relatively prime
		to all numbers */
		if (gcd(i, n) == 1)
		{
			result++;
		}
	}
	return result;
}

int gcd(int a, int b)
{
	if (a == 0)
	{
		return b;
	}
	return gcd(b % a, a);
}
