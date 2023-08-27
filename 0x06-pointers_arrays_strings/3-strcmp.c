#include "main.h"

/**
 *_strcmp - compares strings s1 and s2
 *@s1: first string
 *@s2: seconf string
 *Return: return resugg=G
 */
int _strcmp(char *s1, char *s2)

{
	while (*s1 != '\0' && *s1 == *s2)
		s1++, s2++;
	{
		return (*s1 - *s2);
	}
}
