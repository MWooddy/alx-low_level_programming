#include "main.h"

/**
* _strncat - function that concatenates two strings
*@dest: char variable
*@src: char variable
*@n: int variable
*Return:  a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int destIndex = 0;
	int srcIndex = 0;

	/*More loops,Whoo*/
	while (dest[destIndex] != '\0')
	{
		destIndex++;
	}
	while (src[srcIndex] != src[n])
	{
		dest[destIndex] = src[srcIndex];
		destIndex++;
		srcIndex++;
	}
	dest[destIndex] = '\0';
	/*Pleease work now!*/
	return (dest);
}
