#include "main.h"

/**
*_islower - check if the letter is lowercase
*Return: Is lower  1 (Success)
*/

int _islower(int c)
{
	
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
