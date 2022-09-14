#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints all natural numbers from n to 98.
*@n: value passed
*/

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	{
	while ( n > 98)
	{
		printf("%i, ", n);
		n--;
	}

	if (n == 98)
	{
		printf("%i, ", n);
	}

	printf("\n");
}
