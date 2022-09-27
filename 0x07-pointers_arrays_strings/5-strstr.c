#include "main.h"

/**
* _strstr - locates a substring
*@haystack: char
*@needle: char
*Return: pointer to the beginning of the located substring
*Description:  a function that locates a substring
*/

int searchCompare(char *haystack, char *needle);

char *_strstr(char *haystack, char *needle)
{
	int index2;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (index2 = 0; haystack[index2] != '\0'; index2++)
	{
		if (needle[0] == haystack[index2])
		{
			if (searchCompare(&haystack[index2], needle) == 1)
			{
				return (&haystack[index2]);
			}
		}
	}
	return (NULL);
}

/**
* searchCompare - compare 2 strings
*@haystack: source string
*@needle: string being compared
*Return: 1 if there is a matche & 0 if not
*/

int searchCompare(char *haystack, char *needle)
{
	int index1;

	for (index1 = 0; needle[index1] != '\0'; index1++)
	{
		if (haystack[index1] == '\0')
		{
			return (0);
		}
		if (haystack[index1] != needle[index1])
		{
			return (0);
		}
	}
	return (1);
}
