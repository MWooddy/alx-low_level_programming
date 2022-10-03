#include "main.h"

/**
* rot13 - encodes a string using
*@encode: string to be encoded
*Return: encoded string
*Description:a function that encodes a string using rot13
*/

char *rot13(char *encode)
{
	char Cipher[] = {
	"NOPQRSTUVWXYZABCDEFGHIJKLM[\\]^_`nopqrstuvwxyzabcdefghijklm"};

	int index;

	for (index = 0; encode[index] != '\0'; index++)
	{
		if (encode[index] >= 'A' && encode[index] <= 'z')
		{
			encode[index] = Cipher[encode[index] - 'A'];
		}
	}
	return (encode);
}
