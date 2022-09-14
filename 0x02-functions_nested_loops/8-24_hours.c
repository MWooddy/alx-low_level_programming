#include "main.h"

/**
* jack_bauer - prints every minute of the day
*Description: prints every minute, starting from 00:00 to 23:59.
*/

void jack_bauer(void)
{
	/*declartions for min & hours*/
	int hour;
	int min;

	/*cant seem to use a for loop effectively*/
	/*& can not use if statements. Attempt while loop*/
	/**
	*while (hours < 24)
	*{
	*while (min <60)
	*{ putchar ('0' + (hours /10));
	*putchar('0' + (hours % 10));
	*_putchar(':');
	**_putchar('0' + (min / 10));
	*_putchar('0' + (min % 10));
	*_putchar('\n');
	*min++;
	*/

	while (hours < 24)
	{
		while (min < 60)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		/*Need to rest minutes and increase the hour*/
		min = 0;
		hours++;
	}
}
