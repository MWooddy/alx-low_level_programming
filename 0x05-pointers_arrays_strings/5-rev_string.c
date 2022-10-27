#include "main.h"

/**
* rev_string - reverses a string
*@s: string to reverse
*/

void rev_string(char *s)
{
	int i = 0;
	int j = (_stringlength(s) - 1);
	char character;

	while (i < j)
	{
		character = s[i];
		s[i] = s[j];
		s[j] = character;
		i++;
		j--;
	}
}

/**
* _stringlength - lentgh of string
*@s:string
*Return: the length
*/

int _stringlength(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
