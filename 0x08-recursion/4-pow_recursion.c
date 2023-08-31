#include "main.h"

/**
 *_pow_recursion - fxn rtrns the value of x raised to the pwr of y
 *@y: the power
 *@x: the number
 *Return: 0 is sucess
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
