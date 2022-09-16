#include "main.h"

/**
* print_triangle - function that prints a triangle
*@size: size of triangle
*Description -  prints a triangle, followed by a new line.
*/

void print_triangle(int size)
{
	int height;
	int width;
	int draw;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 1; height <= size; height++)
		{
			for (width = 1; width <= (size - height); width++)
			{
				_putchar(' ');
				for (draw = 1; draw <= height; draw++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}
	}
}
