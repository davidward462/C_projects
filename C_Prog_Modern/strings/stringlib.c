#include <stdio.h>
#include <string.h>

#define INPUT_LENGTH 26

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
	strcpy(input, "");
	char copied[INPUT_LENGTH + 1];
	strcpy(copied, "");
	printf("input: %s\ncopied: %s\n", input, copied);

	printf("$ ");
	readline(input, INPUT_LENGTH);

	// copy input into copied but limit chars by one less than size of copied
	strncpy(copied, input, sizeof(copied)-1);
	copied[sizeof(copied)-1] = '\0';
	
	printf("input: %s\ncopied: %s\n", input, copied);

	return 0;
}
