#include "main.h"

/**
* _atoi - converts string to int
* @s: string to convert
* Description: converts string to int considering all negatives
* Return: integer
**/

int _atoi(char *s)
{
	int index;
	int value = 0;
	int sign = 1;

	for (index = 0;
	s[index] != '\0' && !(s[index] >= '0' && s[index] <= '9'); index++)
	{
		if (s[index] == '-')
		{
			sign = sign * -1;
		}
	}
	for (index = 0; s[index] != 0; index++)
	{
		if (s[index] >= '0' && s[index] <= '9')
		{
			value = value * 10 + sign * (s[index] - '0');
		}
		if (value != 0 && !(s[index] >= '0' && s[index] <= '9'))
		{
			return (value);
		}
	}
	return (value);
}
