#include <stdio.h>

/**
* main - entry point
*@void: prints prime factor
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
