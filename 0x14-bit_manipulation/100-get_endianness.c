#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 1; /* Initialize an integer variable with value 1 */
	char *endian = (char*)&num; /* Interpret bytes of num as characters */

	if (*endian == 1)
	{
		/* If the first byte is 1, it's little endian */
		return 1; /* Little Endian */
	}
	else
	{
		/* If the first byte is not 1, it's big endian */
		return 0; /* Big Endian */
	}
}

