#include <stdio.h>
#define LENGTH 80

int readLine(char str[], int n) // str[] is the address of the first value of the array
{
	int ch, i = 0; // Initialize

	// While character is not a newline
	while ( (ch = getchar()) != '\n')
	{
		if (i < n) // n is the max length allowed for the line
		{
			str[i] = ch;
			i++;
		}
	}
	str[i] = '\0'; // Null terminator
	return i;
}

int countSpaces(const char *s)
{
	int count = 0;
	for (; *s != '\0'; s++)
		if (*s == ' ')
			count++;
	return count;
}

int main(void)
{
	char str[LENGTH +1];
	printf("$ ");
	readLine(str,LENGTH);
	printf("%s\n", str);
	printf("%d\n", countSpaces(str));

	return 0;
}
