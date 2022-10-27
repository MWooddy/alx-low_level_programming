#include <stdio.h>

/**
*main - Entry Point
*Return: Always 0 (Success)
*/

int main(void)
{
	/*declare my variable "x"*/
	int x = 0;

	while (x < 10)
	{
		printf("%i", x);
		x++;
	}
	putchar('\n');
	return (0);
}
