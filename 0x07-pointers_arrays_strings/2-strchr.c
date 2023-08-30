#include "main.h"
#include <string.h>

/**
 *_strchr - fxn that locates a character in a string
 *@s: the string to search through
 *@c: the character to be located
 *Return: 0 is success
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
