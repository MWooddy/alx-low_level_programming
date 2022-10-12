#include "function_pointers.h"

/**
* int_index - function that searches for an integer
* @array: array of elements
* @size: size of the array
* @cmp: pointer to the function to be used
* Return: index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array != NULL && cmp != NULL)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
			{
				return (index);
			}
		}
	}
	return (-1);
}
