#ifndef _MAIN_H_
#define _MAIN_H_


/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c);
{
	return (write(1, &c, 1));
}
/*
*
*/
int _isupper(int c);
{
	int upper[] = {'A','B','C','D','E','F','G','H','I','G','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int lower[] = {'a','b','c','d','e','f','g','h','i','g','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	int arrayCheck = 0;

	do{
		if (c == upper[arrayCheck])
		{
			return (1);
		}
		else if (c == lower[arrayCheck])
		{
			return (0);
		}
		else
		{
			arrayCheck++;
		}
	}while (arrayCheck <= 25);
}

/*
*
*/
int _isdigit(int c);

/*
*
*/
int mul(int a, int b);

/*
*
*/
void print_numbers(void);

/*
*
*/
void print_most_numbers(void);

/*
*
*/
void more_numbers(void);

/*
*
*/
void print_line(int n);


/*
*
*/
void print_diagonal(int n);

/*
*
*/
void print_square(int size);

/*
*
*/
void print_triangle(int size);

/*
*
*/
void print_number(int n);








#endif /* MAIN_H */
