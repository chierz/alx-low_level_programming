#include "main.h"
#include <string.h>

/**
 *_strpbrk - fxn dat searches a string for any of a set of bytes
 *@s: the whole string
 *@accept: the string to search for
 *Return: 0 is success
 */

char *_strpbrk(char *s, char *accept)

{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s); /* Found a matching character*/
			}
			a++;
		}
		s++;
	}
	return (NULL); /* no matching character found*/
}

