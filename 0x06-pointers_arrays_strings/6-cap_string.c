#include "main.h"
#include <stdbool.h> /*Include the header for boolean data type*/

/**
 * cap_string - Capitalizes all words in a string
 * @str: The input string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	bool new_word = true; /*Flag to track the start of a new word*/

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
			/*Check if new word and lowercase letter*/
		{
			str[i] -= 32; /*Convert lowercase to uppercase*/
			new_word = false; /* Reset the new_word flag*/
		}

		/*Check for separator characters: space, tab, newline, etc.*/
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			new_word = true; /* Set the new_word flag*/
		}
	}

	return (str);
}


