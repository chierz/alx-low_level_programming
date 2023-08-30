#include "main.h"
#include <string.h>

/**
 *_strchr - a fxn that locates a character in a string
 *@s: the string to search through
 *@c: the character to be located
 *Return: 0 is success
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);

}