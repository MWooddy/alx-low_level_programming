#include <stdio.h>

/**
*main - Entry Point
*
*Return: Always 0 (Success)
*/

int main(void)
{
	/*declare two variables*/
	int digit1;
	int digit2;

	/**
	*Need various nested loops to perform required task
	*Need to increment and print digits
	*check no duplicate combination
	*print ',' and space
	*/

	for (digit1 = '0'; digit1 <= '9' ; digit1++)
	{
		
		for (digit2 = (digit1 +1); digit2 <= '9'; digit2++)
		{
			putchar(digit1);
			putchar(digit2);

			if (digit1 != '8' || digit2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return(0);
}

		
