#include "main.h"

/**
* leet - encodes a string
*@encode: string to be encoded
*Return: encoded a string
*Description:  a function that encodes a string
*/

char *leet(char *encode)
{
	int letters[11] = {'a', 'A', 'e', 'E', 'o',
	'O', 't', 'T', 'l', 'L'};
	int numbers[11] = {'4', '4', '3', '3', '0',
	'0', '7', '7', '1', '1'};

	int index1;
	int index2;

	for (index2 = 0; encode[index2] != '\0'; index2++)
	{
		for (index1 = 0; letters[index1] != '\0'; index1++)
		{
			if (encode[index2] == letters[index1])
			{
				encode[index2] = numbers[index1];
			}
		}
	}
	return (encode);
}
