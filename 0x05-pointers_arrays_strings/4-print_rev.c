#include "main.h"

/**
* print_rev - prints string
*@s: input char
*/

void print_rev(char *s)
{
	int length = 0;
	int i;

	/* loop thru length of string & point to last char*/
	while (*s != '\0')
	{
		length++;
		++s;
	}
	s--;
	/* start printing*/
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
