#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number.
 * @index: The index, starting from 0 of the bit to get.
 *
 * Return: The value of the bit at index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Error: Index out of range */
	}
	mask = 1UL << index; /* Shift 1 by index positions */
	return ((n & mask) ? 1 : 0);
}

