#include "main.h"

/**
* _strcpy - copies the string pointed to by src
*@dest: char
*@src: char
*Return: value the pointer to dest
*Description: a function that copies the string
*/

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (index >= 0)
	{
		dest[index] = src[index];
		if (src[index] == '\0')
		{
			return (dest);
		}
		index++;
	}
	return (dest);
}
