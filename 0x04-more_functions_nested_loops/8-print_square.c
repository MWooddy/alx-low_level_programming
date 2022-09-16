#include "main.h"

/**
* print_square - prints #
*@size: is the size of the square
*Description - a function that prints a square
*/

void print_square(int size)
{
	/*Rows and cloumns again*/
	int row;
	int column;

	/*condition before creating square*/
	if (size > 0)
	{
		for (row = 1; row <= size; row++)/*for the row*/
		{
			for (column = 1; column <= size; column++)/*for the column*/
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else /*no squares allowed*/
	{
		_putchar('\n');
	}
}
