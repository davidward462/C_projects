#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

// returns integer with the bounds [lower, upper)
int rand_int_range(int lower, int upper)
{	
	int value = (rand() % (upper - lower + 1)) + lower;
	//printf("%d : %d -> %d\n", lower, upper, value);

	return value;
}

void make_positive(int *valuep)
{
	if(*valuep < 0)
	{
		*valuep *= -1;
	}
}

int roll_dice(int dice_type)
{
	int roll = rand_int_range(1, dice_type);
       return roll;	
}

bool in_range(int roll_value, int max)
{
	bool result = true;

	if(roll_value > max)
	{
		result =  false;
	}
	else if(roll_value < 1)
	{
		result =  false;
	}

	return result;
}

void nl() // print newline
{
	printf("\n");
}

int main(void)
{
	srand((unsigned) time(NULL));
	int count = 0;

	while(count < 1) // update later
	{
		printf("enter dice: ");
		int number_dice, dice_type, roll;
		int result_buffer = 0;
		scanf("%dd%d", &number_dice, &dice_type); //get input in the form xdy
		
		make_positive(&dice_type);
		make_positive(&number_dice);
	
		for(int i = 0; i < number_dice; i++) //roll all dice
		{
			roll = roll_dice(dice_type);
			
			//for testing
			if(!(in_range(roll, dice_type)))
			{
				printf("FAIL: %d out of range\n", roll);
			}
			
			result_buffer += roll;
			printf("%d\n", roll);
		}
		
		printf("total: %d\n", result_buffer);

		count++;
	}

	return 0;
}
