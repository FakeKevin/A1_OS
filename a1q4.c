/* Assignment 1 Question 4
Keun Young Jee */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rmstr(char* word, char* str);

int main(int argc, char *argv[])
{
	rmstr(argv[1], argv[2]);
}

void rmstr(char* word, char* str)
{
	char *ptr = word;
	char arr[sizeof(word)];
	int index= 0;
		/* Initialized a pointer for the string and an
		array to store a new string with the selected
		string removed. The pointer literates through all
		the character from the user input string and also
		removes the selected string from the input */
	while (*ptr)
	{
		if (!strchr(str, *ptr))
		{
			arr[index] = *ptr;
	   		index++;
		}
		ptr++;
	}
		/* Adds an escape character at the end so that it
		terminates the write sequence. This is to elminate
		unwanted characters */
	*ptr = '\0';

	for(int i = 0; i < index; i++)
	{
		printf("%c", arr[i]);
	}
		/* Adds a newline for output organization */
	printf("\n");
}
