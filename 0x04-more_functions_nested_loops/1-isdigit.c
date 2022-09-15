#include "main.h"

/**
* _isdigit -a function that checks for a digit (0 through 9).
*Returns: Returns 1 if c is a digit 0 otherwise
*@c:input varible
*Description: a function that checks for a digit (0 through 9).
*/

int _isdigit(int c)
{
	int upper[] = {'A','B','C','D','E','F','G','H','I','G','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int lower[] = {'a','b','c','d','e','f','g','h','i','g','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char d = '0';
	int arrayCheck = 0;
	int output;

	do
	{
		if (c == upper[arrayCheck])
		{
			output = 0;
		}
		else if (c == lower[arrayCheck])
		{
			output = 0;
		}
		else if (c == d)
		{
			output = 1;
		}
		else
		{
			arrayCheck++;
			d ++;
		}
	}while (arrayCheck <= 25);
	return (output);
}
