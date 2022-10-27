#include "main.h"

/**
* reverse_array -  reverses the content
*@a: int input [ararry]
*@n: int size
*Description: function that reverses the content
*/

void reverse_array(int *a, int n)
{
	int x = 0;
	int arrayBegining = 0;
	int arrayEnd = n - 1;

	/* Don't forget '*' */
	/*Reverse while we wait*/
	while (arrayBegining < arrayEnd)
	{
		x = *(a + arrayBegining);
		*(a + arrayBegining) = *(a + arrayEnd);
		*(a + arrayEnd) = x;
		arrayBegining++;
		arrayEnd--;
	}
}
