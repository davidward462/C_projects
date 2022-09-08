#include <stdio.h>
#define LENGTH 80

int readLine(char str[], int n)
{
	int ch, i = 0;

	while ( (ch = getchar()) != '\n')
	{
		if (i < n) str[i++] = ch;
	}
	str[i] = '\0';
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
