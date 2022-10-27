#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - main func
*@argc: argument count
*@argv: argument vector
*Return: operation codes
*/

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < j)
	{
		printf("%02x", *((unsigned char *)main + i));
		i++;
		if (j > i)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
