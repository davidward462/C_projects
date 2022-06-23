#include <stdio.h>

// Word-counting program

#define IN 1 	// Inside a word
#define OUT 0	// Outsid a word

int main()
{
	int c, numOfLines, numOfWords, numOfChars, state;
	
	state = OUT;
	numOfLines = numOfWords = numOfChars = 0;
	
	while ( ((c=getchar() ) != '~') && ((c=getchar() ) != EOF))
	{
		++numOfChars;
		if (c == '\n')
		{
			++numOfLines;
		}
		
		if (c == ' ' || c == '\n' || c == '\t')
		{
		
			state = OUT; // Found whitespace, newline, or tab
		}
		else if (state == OUT)
		{
			state = IN;
			++numOfWords; // Found new word
		}
	}
	
	printf("lines: %d \twords: %d \tchars: %d\n", numOfLines, numOfWords, numOfChars);
	
	return 0;
}

