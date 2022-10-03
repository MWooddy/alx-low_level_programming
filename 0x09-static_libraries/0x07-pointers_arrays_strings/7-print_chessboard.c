#include "main.h"
/**
* print_chessboard - prints the chessboard
*@a: char array
*Descritpion:  a function that prints the chessboard
*/

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (y = 0; y < 8; y++)
	{
		for (x = 0; x <= 8; x++)
		{
			if (x == 8)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(a[y][x]);
			}
		}
	}
}
