#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Print custom randomized grid

void gen_grid(int r, int c, int d, char ch, char a[r][c]);
void print_grid(int r, int c, char a[r][c]);

// $ rows columns density(%) character
int main(void)
{
    int rows, columns, density, probability;
    char ch;
    printf("$ ");
    scanf("%d %d %d %c", &rows, &columns, &density, &ch);
    char grid[rows][columns];
    if(density > 100) density = 100;

    //TODO: calculate density probability?
    //probability = 100 - density;
    probability = density;

    srand((unsigned) time(NULL));

    // Initial populate
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            grid[i][j] = '.';
        }
    }

    gen_grid(rows, columns, probability, ch, grid);

    print_grid(rows, columns, grid);

    return 0;
}

void gen_grid(int rows, int columns, int probability, char ch, char grid[rows][columns])
{
    int choice;
    int total_added;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            choice = (rand() % 100) + i;
            //printf("%d ", choice);
            if(choice < probability)
            {
                grid[i][j] = ch;
                total_added++;
            }
        }
    }
    printf("total: %d\n", total_added);
}

void print_grid(int rows, int columns, char grid[rows][columns])
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%c ",grid[i][j]);
        }
        printf("\n");
    }
}