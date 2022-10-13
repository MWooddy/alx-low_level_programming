#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

/*Standard Libiaries*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*Prototype Functions*/
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list c);
void print_int(va_list i);
void print_float(va_list f);
void print_string(va_list s);

/**
*struct data_type - struct
*@s: symbol
*@fun: function
*/
typedef struct data_type
{
	char s;
	void (*fun)(va_list);
} va_struct;

#endif
