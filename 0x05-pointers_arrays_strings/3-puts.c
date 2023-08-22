#include "main.h"

/**
 *@i: variable
 *_puts - prints string followed by a a new line
 *Return: 0 is success
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
