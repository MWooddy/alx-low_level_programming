#include "main.h"

/**
* print_line - draws a straight line in the terminal
*@n: how long the line should be.
*Description - a function that draws a straight line
*/

void print_line(int n)
{
	int length = n;

	for (length = n; length > 0; length--)
	{

		_putchar('_');
	}
	_putchar('\n');
}
