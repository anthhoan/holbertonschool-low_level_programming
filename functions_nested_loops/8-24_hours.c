#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: the time
 */

void jack_bauer(void)
{
	int hour, hourz, minute, minutez;

	for (hour = 48; hour <= 50; hour++)
	{
		for (hourz = 48; hourz <= 51; hourz++)
		{
			for (minute = 48; minute <= 53; minute++)
			{
				for (minutez = 48; minutez <= 57; minutez++)
				{
					_putchar(hour);
					_putchar(hourz);
					_putchar(58);
					_putchar(minute);
					_putchar(minutez);
					_putchar('\n');
				}
			}
		}
	}
}
