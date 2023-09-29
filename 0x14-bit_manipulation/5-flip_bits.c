#include "main.h"

/**
 * flip_bits - Returns the num of bits needed to flip to get
 * to from one number to another.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m; /* Calculate bitwise XOR */
	unsigned int count = 0; /* Initialize bit count */

	while (xor_result > 0)
	{
		count += xor_result & 1; /*Check if the least signifcnt bit is set*/
		xor_result >>= 1; /* Shift right to check the next bit */
	}

	return (count); /* Return the number of bits to flip */
}

