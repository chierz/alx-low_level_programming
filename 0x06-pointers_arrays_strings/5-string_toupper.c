#include "main.h"
#include <ctype.h>

/**
 *string_toupper - converts lowercase to uppercase
 *@str: pointer to the str
 *Return: returns the capitalized string
 */

char *string_toupper(char *str)

{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
