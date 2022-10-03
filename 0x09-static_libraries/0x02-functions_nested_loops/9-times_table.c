#include "main.h"

/**
* times_table - times_table
*/

void times_table(void)
{
	/*to match the task need to create a row with 10 columns (10x10)*/
	/*last number needs to be starting by 0*/
	/*go up by 9 or multiples of 9*/
	int row;
	int column;
	int multiple;

	/*can use a for loop to create the rows and columns*/
	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			/*to get the last digit to be the multple*/
			/*check grid layout in book and task*/
			/* can multiply the row by column*/
			multiple = (row * column);

			/*if statement for layout*/
			if (column == 0)
			{
				_putchar('0' + multiple);
			}
			else if (multiple <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + multiple);
			}
			else if (multiple > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (multiple / 10));
				_putchar('0' + (multiple % 10));
			}
		}
		_putchar('\n');
	}
}
