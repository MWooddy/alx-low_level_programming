#include "main.h"

/**
* _strpbrk - searches a string
*@s: char
*@accept: char
*Return: a pointer to the byte in s
*Description: a fun that searches a str for any of a set of bytes
*/

char *_strpbrk(char *s, char *accept)
{
	int index;
	int x;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (accept[x] == s[index])
			{
				return (&s[index]);
			}
		}
	}
	return (NULL);
}
