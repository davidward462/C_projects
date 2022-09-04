#include <stdio.h>

void printArray(int *a, int n)
{
	for(int *p; p < a +n; p++)
	{
		printf("%d ", *p);
	}
}

int main(void)
{
	int message[30];
	char ch;
	int *p;
	p = message;

	while((ch = getchar()) != '\n')
	{		
		*p = ch;
	}

	return 0;
}
