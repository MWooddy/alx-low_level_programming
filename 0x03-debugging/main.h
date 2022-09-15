#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>

void positive_or_negative(int i);

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
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




	#endif /* MAIN_H */
