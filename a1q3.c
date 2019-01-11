/* Assignment 1 Question 3
Keun Young Jee */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rmchr(char* word, char chr);

int main(int argc, char *argv[]) {

	rmchr(argv[1], argv[2][0]);

}
		/* Initialized a pointer for the string and an array to store
		a new string with the selected character removed. The pointer
		literates through all the character from the user input string
		and also removes the selected character	from the string. */
void rmchr(char* word, char chr)
{
	char *ptr = word;
	char arr[sizeof(word)];
	int index= 0;

	while (*ptr)
	{
		if (*ptr != chr)
		{
		   arr[index] = *ptr;
		   index++;
		}
		ptr++; // Incrementing the pointer
	}
		/* At the end of the string, it writes the escape character
		so that it terminates the write sequence. This is to get rib
		of unwanted characters. */
	*ptr = '\0';

	for(int i = 0; i < index; i++)
	{
		printf("%c", arr[i]);
	}
		/* Adds a newline for cleaner output */
	printf("\n");
}
