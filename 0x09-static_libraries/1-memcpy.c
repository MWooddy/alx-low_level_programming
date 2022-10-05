#include "main.h"

/**
* _memcpy - copies memory area
*@dest: char
*@src: char
*@n: int
*Return: a pointer to dest
*Description: a function that copies memory area
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (; n > 0; n--)
	{
		dest[n - 1] = src[n - 1];
	}
	return (dest);
}
