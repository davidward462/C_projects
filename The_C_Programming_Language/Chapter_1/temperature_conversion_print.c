#include <stdio.h>

// 1.2 Variables and expressions

int main()
{
	// initialize
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; // low limit of temperature table
	upper = 300; // upper limit of temperature table
	step = 20; // step size
	
	fahr = lower;
	while  (fahr <= upper)
	{
		celsius =  (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
		
	return 0;
}