#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: Pointer to the binary string.
 *
 * Return: The converted unsigned int, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary = 0;
	int i;

	if (b == NULL) /* Check if b is a null pointer */
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1') /* Check for invalid characters */
		{
			return (0);
		}

		if (b[i] == '0')
		{
			binary <<= 1;
		}
		else if (b[i] == '1')
		{
			binary = (binary << 1) | 1;
		}
	}

	return (binary);
}

