#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints all natural numbers from n to 98.
*@n: value passed
*/

void print_to_98(int n)
{
	
	if ( n > 98)
	{
		for (i = n; i >= 98; i--;)
		{
			printf("%i, ", i);
		}
	}
	else if (n <= 98)
	{
		for (d = n; d <= 98; d++;)
		{
			printf("%i, ", d);
		}
	}
}
