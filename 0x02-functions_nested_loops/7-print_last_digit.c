#include "main.h"

/**
*print_last_digit - prints last digit
*@x:input
*Return: value of last digit
*/

int print_last_digit(int x)
{
	if (x < 0)
	{
		x *= -1;
		_putchar ('0' + (x % 10));
		return (x % 10);
	}
}
