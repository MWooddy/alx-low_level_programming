#include "main.h"

/**
* _strlen - length of a string
*@s: input
* Description: function that returns the length of a string.
*Return: returns the length of a string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
