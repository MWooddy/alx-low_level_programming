#include "main.h"

/**
*_isupper - checks for uppercase character.
*@c: input
*Return: 0 for other and 1 for uppercase
*Description: a function that checks for uppercase character.
*/

int _isupper(int c)
{
	int upper = 'A';
	int lower = 'a';
	int output;

	while( upper <= 'Z')
	{
		if (c == upper)
		{
			 output = 1;
		}
		upper++;
	}
	while( lower <= 'z')
	{
		if( c == lower)
		{
			output = 0;
		}
		lower++;
	}
	return (output);
}
