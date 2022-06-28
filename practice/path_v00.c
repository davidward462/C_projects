#include <stdio.h>

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
    int rows, cols;

    rows = 20;
    cols = 30;

    char grid[rows][cols];
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            grid[i][j] = '.';
        }
    }

    print_grid(rows, cols, grid);


    return 0;
}