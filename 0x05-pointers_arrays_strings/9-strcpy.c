#include "main.h"

/**
 *_strcpy - Writes a function that copies src to dest
 *@src: string to be copied
 *@dest: where the string is tobe copied to
 *Return: void
 */

char *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
