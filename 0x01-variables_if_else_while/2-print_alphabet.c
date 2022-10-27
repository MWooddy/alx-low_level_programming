#include <stdio.h>

/**
*main - Entry point for alphabet
*
*Return: ALways 0 (Success)
*/
int main(void)
{
	/*Declartion for starting point.*/
	char startingAlphabet = 'a';

	/*using while loop to increase char*/
	while (startingAlphabet <= 'z')
	{
		putchar(startingAlphabet);
		startingAlphabet++;
		/*increase variable*/
	}
	putchar('\n');
	return (0);
}
