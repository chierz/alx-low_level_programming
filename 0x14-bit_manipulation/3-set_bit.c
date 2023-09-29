#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number.
 * @index: The index, starting from 0 of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* Check if index is within valid range */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return -1; /* Error: Index out of range */
	}
	mask = 1UL << index; /* Shift 1 by index positions */
	*n = *n | mask; /* Set the bit at the specified index to 1 */

	return 1;
}

