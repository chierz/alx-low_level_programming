#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The input string
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int digit;
	int result = 0, sign = 1, seen_digit = 0;

	while (*s)
	{
		if ((*s == '-' || *s == '+') && (!seen_digit ||
					(*(s - 1) != '-' && *(s - 1) != '+')))
			sign = (*s++ == '-') ? -1 : 1;

		if (*s >= '0' && *s <= '9')
		{
			seen_digit = 1;
			digit = *s++ - '0';

			if (result > (INT_MAX - digit) / 10)
				return ((sign == 1) ? INT_MAX : INT_MIN);

			result = result * 10 + digit;
		}
		else if (seen_digit)
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
