#include "main.h"
#include <string.h>

/**
 *_strspn - a fxn that gets the length of a prefix substring
 *@s:the string to search though
 *@accept: the string that is search through
 *Return: 0 is success
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int count = 0;
	int i;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
			/*End loop if s[i] is not in accept*/
		}
	}
	return (count);
}
