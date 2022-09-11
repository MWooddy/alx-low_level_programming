#include <stdio.h>

/**
*main - Entry Point
*Return: ALways 0 (Success)
*/

int main(void)
{
	/*Declaration*/
	char small = 'a';

	/*Using an If statement nested in a While loop*/
	while (small <= 'z')
	{
		/*need the if statement to run to check for the following letters q and e*/
		if ((small != 'q') && (small != 'e'))
		{
			putchar(small);
		}
		small++;
	}
	putchar('\n');
	return (0);
}
