#include "variadic_functions.h"

/**
* print_strings - print strings
* @separator: string
* @n: int
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings_to_print;
	char *string;

	va_start(strings_to_print, n);

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			string = va_arg(strings_to_print, char*);
			if (string == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", string);
			}
			if (i < n && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(strings_to_print);
	}
	printf("\n");
}
