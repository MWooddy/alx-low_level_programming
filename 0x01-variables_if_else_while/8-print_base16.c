#include <stdio.h>

/**
*main - Entry Point
*Return: Always 0 (Success)
*/

int main(void)
{
	/*Two variables declared*/
	int x = '0';
	char small = 'a';

	/*firt while loop is for numbers & second while loop is for letters*/
	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	while (small <= 'f')
	{
		putchar(small);
		small++;
	}
	putchar('\n');
	return (0);
}
