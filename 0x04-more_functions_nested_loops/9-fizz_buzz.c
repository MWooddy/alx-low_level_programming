#include "main.h"
#include <stdio.h>

/**
* main - start of code
* Description - Write a program that prints the numbers
*from 1 to 100 
*But for multiples of three print Fizz
*for the multiples of five print Buzz
*multiples of both three and five print FizzBuzz
*/

int main(void)
{
	int x;

	/*need to loop through all the numbers*/
	for (x = 1; x <= 100; x++)
	{
		/*Begin the checks for fizz buzz*/
		if (x % 3 == 0 && x % 5 == 0) /*print FizzBuzz*/
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)/*print fizz*/
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0) /*print buzz*/
		{
			printf("Buzz ");
		}
		else /*No Fizzy Buzzy just an number*/
		{
			printf("%i ", x);
		}
	}
	printf("\n");
	return (0);
}
