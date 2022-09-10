#include <stdio.h>

/**
*main - ENtry Point
*Return: Always 0 (Success)
*/

int main(void)
{
	/*Using x variable*/
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
