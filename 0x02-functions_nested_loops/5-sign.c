#include "main.h"

/**
*print_sign: prints the sign of a number.
*@n: input value
*Returns: 1 & prints + ,if n < 0 ,prints 0 if n = 0 | -1 &prints - if n > 0
*/

int print_sign(int n)
{
	/*Check previos notes on the setup*/
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
