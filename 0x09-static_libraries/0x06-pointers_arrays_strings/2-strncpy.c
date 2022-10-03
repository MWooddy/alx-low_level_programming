#include "main.h"

/**
* _strncpy - function that copies a string
*@dest: char varible
*@src: char varible
*@n: int varible
*Return: pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	/*For the loops*/
	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
	/*got desired result*/
	/*do not change*/
}
