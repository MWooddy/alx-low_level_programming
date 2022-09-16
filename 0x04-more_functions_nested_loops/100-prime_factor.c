#include <stdio.h>

/**
* main - entry point
* Description - finds and prints the largest prime factor of the number
*/

int main(void)
{
	long int number = 612852475143;
	int divider = 2;

	while (divider < number)
	{
		if (number % divider == 0)
		{
			number /= divider;
			divider = 2;
		}
		else
		{
			divider++;
		}
	}
	printf("%li\n", number);
	return (0);
}
