#include "main.h"
#include <string.h>

/**
 *_memcpy -  a function that copies memory area
 *@dest: destination
 *@src: source
 *@n: number of bytes to be copied
 *Return: 0 is success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
