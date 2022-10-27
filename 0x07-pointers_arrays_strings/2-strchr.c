#include "main.h"

/**
* _strchr -function that locates a character
*@s: char
*@c: char
*Return:  pointer to the 1st occurrence of the char
*Description: a function that locates a character in a string
*/

char *_strchr(char *s, char c)
{
	int index;

	if (s == NULL)
	{
		return (NULL);
	}
	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}
	}
	if (s[index] == c)
	{
		return (&s[index]);
	}
	return (NULL);
}
