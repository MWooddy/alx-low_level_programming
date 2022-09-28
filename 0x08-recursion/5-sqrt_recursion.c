#include "main.h"

int find_root(int n, int root);

/**
* _sqrt_recursion -natural square root of a number
*@n:int
*Return:the natural square root of a number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_root(n, 0));
}

/**
* find_root -find square root
*@n:int
*@root:int
*Retun:  natural square root
*/
int find_root(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	}
	return (find_root(n, root + 1));
}
