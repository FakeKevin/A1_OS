/* Assignment 1 Question 1
Keun Young Jee */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void numCheck(int, int, int);

// Main function
int main(int argc, char *argv[]) {

	numCheck(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));

}

void numCheck(int k, int p, int q) {

	int digit[10];	//Initializing temporary array,
	int total;	//the total sum of numbers,
	int temp;	//and a temporary variable to do the calculations

	for (int j = p; j <= q; j++) {

		total = 0;
		temp = 0;
			/* Using the min and the max interval, it loops through all the
			numbers in between and the function takes the order number taken from the user
			and using the base power of 10, it extracts the number from
			the its respective digit place and stores it in the array. The extraction starts
			from the highest digit to the lowest. The temp value is to store the
			value of the digit place and not just the number. This is done so that
			the digit value can be subtracted from the target number and not affect
			the calculation of the other digit calculations */
		for (int i = k - 1; i >= 0; i--) {
			digit[i] = (p - temp) / pow(10, i);
			temp = temp + digit[i] * pow(10, i);
		}
			/* After the digits have been stored in the array
			the for loop is used to literate through all the numbers
			and take the cube of each number and store it in the total variable */
		for (int i = 0; i < k; i++) {
			total = total + pow(digit[i], k);
		}
			/* There is a parameter put in place so that only numbers
			that are within the ordered number */
		if (p == total && total < pow(10,k) && total >= pow(10, k-1)){
			printf("%d\n", p);
		}
		p++;
	}

}
