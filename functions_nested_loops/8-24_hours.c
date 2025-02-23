#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: the time
 */

void jack_bauer(void)
{
	int hour, hours, minute, minutes;

	for (hour = 48; hour <= 50; hour++)
	{
		for (hours = 48; hours <= 52; hours++)
		{
			for (minute = 48; minute <= 53; minute++)
			{
				for (minutes = 48; minutes <= 57; minutes++)
				{
					_putchar(hour);
					_putchar(hours);
					_putchar(58);
					_putchar(minute);
					_putchar(minutes);
					_putchar('\n');
				}
			}
		}
	}
}
