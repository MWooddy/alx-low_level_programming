#include "main.h"

/**
* _memset - function that fills memory
*@s: char
*@b: char
*@n: int
*Return: a pointer to the memory area s
*Description: fills memory with a constant byte
*/

char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0; n--)
	{
		s[n - 1] = b;
	}
	return (s);
}
