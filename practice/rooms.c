#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void nl() // print newline
{
	printf("\n");
}

// returns integer with the bounds [lower, upper)
int get_rand_int(int lower, int upper)
{	
	int value = (rand() % (upper - lower)) + lower;
	return value;
}

void add_room(int rows, int cols, char grid[rows][cols])
{
	// top left of room is it's center
	int x_pos = get_rand_int(0, rows);
       	int y_pos = get_rand_int(0, cols);	
	int height = get_rand_int(2,7);
	int width = get_rand_int(2,7);

	if(x_pos + width > rows) width = rows - x_pos;
	
	if(y_pos + height > cols) height = cols = y_pos;

	printf("x pos: %d\ny pos: %d\nheight: %d\nwidth: %d\n", x_pos,y_pos, height, width);
	grid[x_pos][y_pos] = '@';

	
	for(int i = x_pos; i < (x_pos + width); i++)
	{
		for(int j = y_pos; j < (y_pos + height); j++)
		{
			grid[i][j] = '#';
		}	
	}
}

void print_grid(int rows, int cols, char grid[rows][cols])
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%c ",grid[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    srand((unsigned) time(NULL));

    int rows, cols;

    rows = 20;
    cols = 30;
	
    // Create grid
    char grid[rows][cols];
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            grid[i][j] = '.';
        }
    }

    //for(int count = 0; count < 150; count++) add_room(rows, cols, grid);


    add_room(rows, cols, grid);
    print_grid(rows, cols, grid);


    return 0;
}
