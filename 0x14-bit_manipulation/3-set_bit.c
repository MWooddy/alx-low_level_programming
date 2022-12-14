#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index.
* @n: number
* @index: index
* Return: the value of the bit at index index
* or -1 if an error occured
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 32)
	{
		*n = (1 << index) | *n;
		return (1);
	}
	return (-1);
}
