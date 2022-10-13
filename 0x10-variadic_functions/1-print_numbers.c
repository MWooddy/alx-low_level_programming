#include "variadic_functions.h"

/**
* print_numbers - print numbers
* @separator: string
* @n: interger
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers_to_print;

	va_start(numbers_to_print, n);

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(numbers_to_print, int));
			if (i < n && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(numbers_to_print);
	}
	printf("\n");
}
