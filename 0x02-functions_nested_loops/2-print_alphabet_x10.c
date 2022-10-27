#include "main.h"

/**
*print_alphabet_x10 - prints the alphabet ten times
*/

void print_alphabet_x10(void)
{
	char lower;
	int lineCount;

	for (lineCount = 1; lineCount <= 10 ; lineCount++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
		_putchar('\n');
	}
}
