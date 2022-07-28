#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// returns integer with the bounds [lower, upper)
int get_rand_int(int lower, int upper)
{	
	int value = (rand() % (upper - lower)) - lower;

	return value;
}

void nl() // print newline
{
	printf("\n");
}

int main(void)
{
	srand((unsigned) time(NULL));
	
	int count = 10;
	int n;
       
	for(int i = 0; i < count; i++)
	{
		n = get_rand_int(0,10);
		printf("%d ", n);
	}
	nl();
	

	return 0;
}
