#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* create_array - create array of chars
* @size: int size
* @c: char
* Return: array
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	int i = 0;

	if (size <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	while (i < (int)size)
	{
		*(array + i) = c;
		i++;
	}
	*(array + i) = '\0';
	return (array);
}
