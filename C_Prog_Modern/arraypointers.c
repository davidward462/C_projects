#include <stdio.h>
#define ROWS 3
#define COLS 4

void print_2d_array(int a[ROWS][COLS])
{
	for(int i =0; i<ROWS; i++)
	{
		for(int j =0; j<COLS; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}	

int main(void)
{
	int a[ROWS][COLS];
	int *p;

	// Fill all cells with zero.
	// Begin assigning the address of the first element of a[][] to p.
	// Iterate through the addresses of all elements of a[][].
	for(p = &a[0][0]; p <= &a[ROWS-1][COLS-1]; p++)
	{
		*p = 0; // Make the value at the address currently stored in p to be zero.
	}	

	print_2d_array(a);

	return 0;
}
