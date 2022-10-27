#include "main.h"

/**
* _strcmp - compares two strings
*@s1: char variable
*@s2: char variable
*Return: space between strings
*/

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	/*while lets compare*/
	while (*(s1 + x) == *(s2 + x) && *(s1 + x))
	{
		x++;
	}
	/*lets return the result*/
	if (*(s2 + x))
	{
		return (*(s1 + x) - *(s2 + x));
	}
	return (0);
}
