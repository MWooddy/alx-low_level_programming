#include "main.h"

/**
* string_toupper -  changes all lowercase letters
*@c: char to change
*Return: lowercase letters of a string to uppercase
*Description: a function that changes all lowercase
*/

char *string_toupper(char *c)
{
	int index = 0;

	/*Loop thru the array drive thru*/
	for (index = 0; c[index] != '\0'; index++)
	{
		/*Super size small letters*/
		if (c[index] >= 'a' && c[index] <= 'z')
		{
			c[index] = c[index] - 'a' + 'A';
		}
	}
	/*Order up*/
	return (c);
}
