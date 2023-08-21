#include "main.h"

/**
 *print_sign - prints signs to corresponding integer value
 *@n: the number to be checked for sign printing
 *Return: according to the integer
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else  if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
