#include "main.h"

/**
* _isdigit -a function that checks for a digit (0 through 9).
*Returns: Returns 1 if c is a digit 0 otherwise
*@c:input varible
*Description: a function that checks for a digit (0 through 9).
*/

int _isdigit(int c)
{
	int upper = 'A';
	int lower = 'a';
	int digit = '0';
	int output;

	 while(upper <= 'Z')
	 {
	 	if (c == upper || c == lower )
		{
			 output = 0;
		}
		upper++;
		lower++;
	}
	while( digit <= '9')
	{
		if(c == digit)
		{
			output = 1;
		}
		digit++;
	}
	return (output);
}
