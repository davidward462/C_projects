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
	size_t n = 0;
	for (n = 0; *s != '\0'; s++)
	{
		n++;
	}
	return n;	
}

int main(void)
{
	char string[MAX_LENGTH];
	int linesRead;
	printf("$ ");
	linesRead = readline(string, MAX_LENGTH);
	printf("$ %s\n", string);
	printf("$ length: %lu\n", stringLength(string));

	return 0;
}
