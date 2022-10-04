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
	char *s;
	int length = 0, i, j, k = 0;
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		length += _strlen(av[i]);
	}
	length += (ac + 1);
	s = malloc(length * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}
	return (s);
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
