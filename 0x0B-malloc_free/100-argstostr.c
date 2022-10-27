#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);

/**
* argstostr - combines all the arguments
* @ac: argc
* @av: argument
* Return: pointer
*/
char *argstostr(int ac, char **av)
{
	char *dest;
	unsigned int size, i, j, k;

	size = 0;
	k = 0;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (unsigned int)ac; i++)
	{
		size += _strlen(av[i]);
	}
	dest = (char *)malloc((size + 1) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (unsigned int)ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			dest[k] = av[i][j];
			k++;
		}
		dest[k] = '\n';
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
/**
* _strlen - returns the length of a string
* @s: string
* Return: length
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++, s++;
	}
	return (length);
}
