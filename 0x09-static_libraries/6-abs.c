#include "main.h"

/**
*_abs: computes the absolute value of an integer.
*@x: input value
*Return: Always
*/

int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (0);
	}
}
