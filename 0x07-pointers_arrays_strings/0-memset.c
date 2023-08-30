#include "main.h"
#include <string.h>

/**
 *_memset - function that fills memory with a constant byte
 *@s: pointer
 *@b: constant byte
 *@n:number of bytes
 *Return: 0 is success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i <  n ; i++)
		s[i] = b;

	return (s);
}

