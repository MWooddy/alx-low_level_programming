#include <stdio.h>

/**
*main - Entry Point
*Return: Always 0 (Success)
*/

int main(void)
{
	int x ='0';

	/*Using an if statement nested within a while loop*/
	while (x <= '9')
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
