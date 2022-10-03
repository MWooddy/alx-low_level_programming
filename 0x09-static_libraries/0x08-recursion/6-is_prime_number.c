#include "main.h"

int prime_con(int n, int i);
/**
*is_prime_number - Inception. Is it possible
*@n: int
*Return: 1 if the input  prime number
*/
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime_con(n, 2));
}

/**
*prime_con - determine if n is a prime
* @n: test case
* @i: recurring factors
* Description: determines if n is a prime using 2 parameters
* Return: 1 if n is a prime, 0 if not
*/
int prime_con(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (n >= (i + 1) * (i * 1))
	{
		return (prime_con(n, i + 1));
	}
	return (1);
}
