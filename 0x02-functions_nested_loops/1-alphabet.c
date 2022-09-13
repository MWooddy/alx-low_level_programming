#include "main.h"

/**
*print_alphabet - print lowercase alphabet;
*/

void print_alphabet(void)
{
	char lower;
	
	lower = 'a';

	while(lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}
	_putchar('\n');
}
