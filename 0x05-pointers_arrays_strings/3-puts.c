#include "main.h"

/**
 *_puts - for printing string on a new line
 *@str: the string in question
 *Return: 0 is success
 */

void _puts(char *str)

{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
