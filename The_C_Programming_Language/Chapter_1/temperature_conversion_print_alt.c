#include <stdio.h>

// 1.3-4 The For Statement and symbolic constants

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{	
	for (int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
	{
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
	
	return 0;
}