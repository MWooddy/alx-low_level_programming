#include "main.h"
#include "stdio.h"
/**
* print_diagsums - prints the sum of the two diagonals
*@a: int
*@size: int
*Description: a fun that prints the sum of the 2 diagonals
*/

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int x;

	for (x = 0; x < size; x++)
	{
		sum1 = sum1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		sum2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
