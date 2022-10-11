#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 80 

int readline(char input[], int maxChars)
{
	int ch, count = 0;

	while ((ch = getchar()) != '\n')
	{
		if (count < maxChars)
		{
			input[count] = ch;
			count++;
		}
	}
	input[count] = '\0';
	return count;
}

size_t stringLength(const char* s)
{
	//Note that the contents of s cannot be altered because it is constant.
	
	size_t count = 0;
	
	// Check if the current value of s is '\0', which is the same as 0 (false).
	// After the check, increment s.
	while (*s++)
	{
		count++;
	}
	return count;	
}

int main(void)
{
	// Initialize
	char string[MAX_LENGTH];
	
	// Get input
	printf("$ ");
	readline(string, MAX_LENGTH);

	// Output
	printf("$ %s\n", string);
	printf("$ length: %lu\n", stringLength(string));

	return 0;
}
