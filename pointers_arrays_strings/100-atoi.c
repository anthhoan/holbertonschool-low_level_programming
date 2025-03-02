#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: stores the string
 * Description:
 * Return: Int
 */

int _atoi(char *s)
{
	int n = 0;
	int sign = 1;
	int start_num = 0;
	int end_num = 0;
	int final_num = 0;

	while (s[n] != '\0')
	{
		if (s[n] == '-' && start_num == 0)
		{
			sign = sign * -1;
		}

		if (s[n] >= '0' && s[n] <= '9' && end_num == 0)
		{
			start_num = 1;
			final_num = (final_num * 10) + (s[n] - '0') * sign;
		}
		else if (!(s[n] >= '0' && s[n] <= '9') && start_num == 1)
		{
			end_num = 1;
		}
		n++;
	}
	return (final_num);
}
