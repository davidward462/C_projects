#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// returns integer with the bounds [lower, upper)
int get_rand_int(int lower, int upper)
{	
	int value = (rand() % (upper - lower)) - lower;

	return value;
}

void print_2d_array(int rows, int cols, int a[rows][cols])
{
	for(int i =0; i<rows; i++)
	{
		for(int j =0; j<cols; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}	

int main(void)
{
	srand((unsigned) time(NULL)); // random seed
	
	int rows, cols;
	printf("size (rows colums): ");
	scanf("%d %d", &rows, &cols);

	int a[rows][cols];
	int *p;

	// Fill all cells with zero.
	// Begin assigning the address of the first element of a[][] to p.
	// Iterate through the addresses of all elements of a[][].
	for(p = &a[0][0]; p <= &a[rows-1][cols-1]; p++)
	{
		*p = get_rand_int(0, 10); // Make the value at the address currently stored in p to be something random
	}	

	print_2d_array(rows, cols, a);

	return 0;
}
