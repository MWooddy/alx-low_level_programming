#include "main.h"

/**
* puts_half - prints half of a string
*@str: string
*Return:  string
*Description: a function that prints half of a string
*/

void puts_half(char *str)
{
	int index = 0;
	int j;

	while (str[index] != '\0')
	{
		index++;
	}
	j = index / 2;
	if (index % 2 == 1)
	{
		j++;
	}
	while (j < index)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
