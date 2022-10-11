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

// Replicate strcpy(s1,s2)
// Append s2 onto the end of s1.
// Return the address of s1.
char *stringJoin(char *s1, const char *s2)
{
	char *p = s1;
	
	while (*p) // Go to the null character of s1
	{
		p++;
	}
	// Copy the value pointed to by s2 into the location pointed to by p.
	while (*p++ = *s2++) // Generates a warning (not ideal).
	{
		;
	}
	return s1;
}

int main(void)
{
	// Initialize
	char string[MAX_LENGTH];
	char *fixed = "abcdef";
	
	// Get input
	printf("$ ");
	readline(string, MAX_LENGTH);

	// Do stuff
	stringJoin(string, fixed);

	// Output
	printf("$ %s\n", string);
	printf("$ length: %lu\n", stringLength(string));

	return 0;
}
