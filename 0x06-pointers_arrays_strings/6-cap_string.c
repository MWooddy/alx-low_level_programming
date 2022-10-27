#include "main.h"

/**
* cap_string - capitalizes all words
*@sentance: array of words
*Return: capitalizes all words of a string
*/

char *cap_string(char *sentance)
{
	int index = 0;

	if (sentance[index] >= 'a' && sentance[index] <= 'z')
	{
		sentance[index] = sentance[index] - 'a' + 'A';
	}
	index++;

	while (sentance[index] != '\0')
	{
		/* need to check the following seporators*/
		/* need to skip over puncuation*/
		/* need to go thru the sentence*/
		/* need to capilize each word*/
		/* skip over new line "\n"*/
		if (
		(sentance[index] >= 'a' && sentance[index] <= 'z')
		&& (sentance[index - 1] == ','
		|| sentance[index - 1] == ';'
		|| sentance[index - 1] == '.'
		|| sentance[index - 1] == '!'
		|| sentance[index - 1] == '?'
		|| sentance[index - 1] == '"'
		|| sentance[index - 1] == '('
		|| sentance[index - 1] == ')'
		|| sentance[index - 1] == '{'
		|| sentance[index - 1] == '}'
		|| sentance[index - 1] == ' '
		|| sentance[index - 1] == '\t'
		|| sentance[index - 1] == '\n'
		))
		{
			/*met a condition*/
			sentance[index] = sentance[index] - 'a' + 'A';
		}
		index++;
	}
	return (sentance);
}
