#include "main.h"

/**
 *_strncpy - a fxn that copies string
 *@src: source sring pointer/what to copy
 *@dest: destination string pointer/what to be copied
 *@n: number of stings to be copied
 *Return: returns pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0 ; i < n &&  src[i] != '\0' ; i++)
		/* Iterate through the characters to copy*/
	{
		dest[i] = src[i];/*Copy character*/
	}
	for (i  = n ; i < n ; i++)
		/*Fill remaining characters with null bytes*/
	{
		dest[i] = '\0';
	}
	return (dest);
}
