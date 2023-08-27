#include "main.h"
#include <stdbool.h> /* For using boolean data type*/

/**
 * cap_string - Capitalizes the first letter of each word in a string
 * @str: Input string
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	bool new_word = true;

	while (str[i] != '\0')
	{
		/* Check if current character is a separator*/
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			new_word = true;
		}
		/*Check if current character is an alphabet*/
		else if ((str[i] >= 'a' && str[i] <= 'z') && new_word)
		{
			str[i] -= 32; /*Convert lowercase to uppercase*/
			new_word = false;
		}
		else
		{
			new_word = false;
		}

		i++;
	}

	return (str);
}

