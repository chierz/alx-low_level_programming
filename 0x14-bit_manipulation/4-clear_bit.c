#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number.
 * @index: The index, starting from 0 of the bit to clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask ;

	/* Check if index is within valid range */
	if (index >= sizeof(unsigned long int) * 8)
	{
		printf("Error: index out of range\n");
		return -1; /* Error: Index out of range */
	}

	mask = 1UL << index; /* Shift 1 by index positions */
	*n = *n & ~mask; /* Clear the bit at the specified index */

	return 1;
}

