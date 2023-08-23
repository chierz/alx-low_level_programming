#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The input string
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int result = 0, sign = 1;

	while (*s && (*s == ' ' || (*s >= '0' && *s <= '9') || *s == '-' || *s == '+'))
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			result = result * 10 + (*s - '0');
		else if (result != 0)
			break;  /* Stop after digits have been processed*/
		s++;
	}

	return result * sign;
}

