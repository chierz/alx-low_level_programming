#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The input string
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;

	while (*s)
	{
		if (*s == '-' || *s == '+')
			sign = (*s++ == '-') ? -1 : 1;

		if (*s >= '0' && *s <= '9')
		{
			digit = *s++ - '0';

			if (result > (INT_MAX - digit) / 10)
				return ((sign == 1) ? INT_MAX : INT_MIN);

			result = result * 10 + digit;
		}
		else if (result != 0)
		{
			break;
		}
		else
		{
			s++;
		}
	}

	return (result * sign);
}

