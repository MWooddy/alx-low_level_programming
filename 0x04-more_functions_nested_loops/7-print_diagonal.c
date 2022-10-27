#include "main.h"

/**
* print_diagonal - draws \ on the terminal
*@n: input of lines
*@Description - draws a diagonal line on the terminal.
*/

void print_diagonal(int n)
{
	int diagonal;
	int distance;

	/*Condition to check*/
	if (n > 0) /*n needs to be greater than zero to start*/
	{
		for (diagonal = 1; diagonal <= n; diagonal++) /*to draw line*/
		{
			for (distance = 1; distance < diagonal; distance++)/*it go da distance*/
			{
				_putchar(' ');
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	else /*it cant go the distance*/
	{
		_putchar('\n');
	}
}
