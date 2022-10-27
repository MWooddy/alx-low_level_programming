#include "main.h"

/**
* _strspn - function that gets the length
*@s: char
*@accept: char
*Return: the num of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	int index;
	int x;
	int exit;

	for (index = 0; s[index] != '\0'; index++)
	{
		exit = 0;
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (accept[x] == s[index])
			{
				exit = 1;
			}
		}
		if (exit == 0)
		{
			return (index);
		}
	}
	return (index);
}
