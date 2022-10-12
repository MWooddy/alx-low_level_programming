#include "function_pointers.h"

/**
* array_iterator - executes a function given as a parameter
* @array: array of elements
* @size: size of the array
* @action: pointer to the function to be used
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array != NULL && action != NULL)
	{
		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
	}
}
