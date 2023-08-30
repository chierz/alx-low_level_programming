#include "main.h"
#include <string.h>

/**
 *_strstr - writes a function that locates a substring
 *@haystack: main string
 *@needle: haystack
 *Return: 0 is success
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			/* Entire substring matched*/
			return (haystack);
		}

		haystack++;
	}

	return (NULL); /*Substring not found*/
}

