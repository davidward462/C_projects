#include <stdio.h>

#define ON 1
#define OFF 0


int main()
{
	
	int state = ON;
	
	int c;
	
	while( (c = getchar()) != EOF)
	{
		printf("\tout -> %d\n\tstate: %d\n", c, state);
	}
	
	
	return 0;
}