#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - tells if an integer is a prime or not
 *@n: number to evaluate
 * Return: 1 if n prime num, 0 if not
 *@i: iterator
 */

int actual_prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 *actual_prime - calculates if a number is prime recursively
 *@n: number to evaluate
 *@i: iterator
 *Return: 1 if n prime num, 0 if not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

