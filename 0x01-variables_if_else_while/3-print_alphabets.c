#include <stdio.h>

/**
*main Entry Point
*Return: Always 0 (Success)
*/

int main(void)
{
	/*Declared small letterand Capital letter*/
	char small = 'a';
	char Capital = 'A':
	
	/*use while loop for small variable and another for Capital*/
	while (small <= 'Z')
	{
		putchar(small);
		/*increase small*/
		small++;
	}

	while (Capital <= 'z')
	{
		putchar(Capital);
		/*increas Capital*/
		Capital++;
	}

	putchar('\n');
	return (0);
}
