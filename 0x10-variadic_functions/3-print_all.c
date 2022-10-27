#include "variadic_functions.h"

void print_char(va_list c);
void print_int(va_list i);
void print_float(va_list f);
void print_string(va_list s);

/**
* print_all - prints anything.
* @format: symbol to print
*/

void print_all(const char * const format, ...)
{
	char *separator = "";
	int i, x;
	va_list list;

	va_struct symbol[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}};
	
	va_start(list, format);
	x = 0;

	while (format != NULL && format[x] != '\0') {
		i = 0;

		while (symbol[i].s != '\0') {
			if (symbol[i].s == format[x]) {
				printf("%s", separator);
				symbol[i].fun(list);
				separator = ", ";
			}
			i++;
		}
		x++;
	}
	va_end(list);
	printf("\n");
}
/**
*print_char - prints a char
*@c: char
*/
void print_char(va_list c) { printf("%c", va_arg(c, int)); }

/**
* print_float - prints a float
* @f: float
*/
void print_float(va_list f) { printf("%f", va_arg(f, double)); }

/**
*print_string - prints a string
* @s: string
*/
void print_string(va_list s) {
	char *str;

	str = va_arg(s, char *);

	if (str == NULL) {
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
* print_int - prints an integer
* @i: integer
*/
void print_int(va_list i) { printf("%d", va_arg(i, int)); }
