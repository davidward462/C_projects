#include <stdio.h>
#include <string.h>

#define INPUT_LENGTH 80

int readline(char str[], int n)
{
	int ch, i = 0;

	// Store line until newline
	while(( ch = getchar() ) != '\n')
	{
		if (i < n)
		{
			str[i] = ch;
			i++;
		}
	}
	str[i] = '\0'; // Null terminator after last read char
	return i;
}

int main(void)
{
	char input[INPUT_LENGTH + 1];
	printf("$ ");
	readline(input, INPUT_LENGTH);

	printf("input: %s\n", input);

	return 0;
}
