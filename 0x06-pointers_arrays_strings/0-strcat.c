#include "main.h"

/**
* _strcat - concatenates two strings
*@dest: charvarible
*@src: char varible
*Return: a pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	int destIndex = 0;
	int srcIndex = 0;

	while (dest[destIndex] != '\0')
	{
		destIndex++;
	}
	while (src[srcIndex] != '\0')
	{
		dest[destIndex] = src[srcIndex];
		destIndex++;
		srcIndex++;
	}
	dest[destIndex] = '\0';
	return (dest);
}
