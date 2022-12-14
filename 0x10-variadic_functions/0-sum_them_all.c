#include "variadic_functions.h"

/**
* sum_them_all - sum of all its parameters
* @n: number to be sum
* Return: the sum of all its parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list numbers_to_sum;

	va_start(numbers_to_sum, n);
	
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers_to_sum, int);
	}
	
	va_end(numbers_to_sum);
	return (sum);
}
