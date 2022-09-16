include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c && b < c)
	{
		largest = a;
	}
	else if (b > a && b> c && a < c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
