#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: the time
 */

void jack_bauer(void)
{
	int hour, hours, minute, minutes

	for (hour = 0; hour <= 2; hour++)
	{
		for (hours = 0; hours <= 4; hours++)
		{
			for (minute = 0; minute <= 5; minute++)
			{
				for (minutes = 0; minutes <= 9; minutes++)
				{
					_putchar(hour);
					_putchar(hours);
					_putchar(58);
					_putchar(minute);
					_putchar(minutes);
				}
			}
		}
	}
}
