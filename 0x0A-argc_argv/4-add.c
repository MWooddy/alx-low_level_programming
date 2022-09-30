#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"

bool isNumber(char *argvv);

/**
* is_num - iterate through each argv to test if it's a number
* @argvv: a argv
* Return: true only if entire string is a number, false if not
*/
int main(int argc, char *argv[])
{
	int index = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (index < argc)
	{
		if (isNumber(argv[index]))
		{
			sum += atoi(argv[index]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		index++;
	}
	printf("%d\n", sum);
	return (0);
}

/**
*isNumber - iterate through each argv to test if it's a number
*@argvv: a argv
* Return: true only if entire string is a number, false if not
*/
bool isNumber(char *argvv)
{
	int index2 = 0;
	for (index2 = 0; argvv[index2]; index2++)
	{
		if (!(argvv[index2] >= '0' && argvv[index2] <= '9'))
		{
			return (0);
		}
	}
	return (1);
}
