#include "main.h"

/**
*_isupper - checks for uppercase character.
*@c: input
*Return: 0 for other and 1 for uppercase
*Description: a function that checks for uppercase character.
*/

int _isupper(int c)
{
	int upper[] = {'A','B','C','D','E','F','G','H','I','G','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int lower[] = {'a','b','c','d','e','f','g','h','i','g','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int output;
	int arrayCheck = 0;

	do{
		if (c == upper[arrayCheck])
		{
			 output = 1;
		}
		else if (c == lower[arrayCheck])
		{
			output = 0;
		}
		else
		{
			arrayCheck++;
		}
	}while (arrayCheck <= 25);
	return (output);
}
