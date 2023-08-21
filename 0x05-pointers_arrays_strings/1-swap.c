#include "main.h"

/**
 *swap_int - swaps two integers
 *@a: swap
 *@b: swap
 *Return: 0 is success
 */

void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;

}
