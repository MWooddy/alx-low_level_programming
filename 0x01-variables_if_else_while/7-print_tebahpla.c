#include <stdio.h>

/**
*main - Entry Point
*Return: Always 0 (Success)
*/

int main(void)
{
	/*starting variable is z*/
	char smallEnd = 'z';

	/*while loop used to decrease to a*/
	while (smallEnd >= 'a')
	{
		putchar(smallEnd);
		smallEnd--;
	}
	putchar('\n');
	return (0);
}
