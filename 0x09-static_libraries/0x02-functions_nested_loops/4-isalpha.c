#include "main.h"

/**
*_isalpha - checks for alphabetic char
*Return: 1 if c is a letter, lowercase or uppercase
*@c: input
*/

int _isalpha(int c)
{
	/**
	*Similair to is lower need to check for conditions
	*Using if statement similiar to is lower
	*need to check if c>= a && c <= z
	*need to check if c >= A && c <= Z
	*/
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
