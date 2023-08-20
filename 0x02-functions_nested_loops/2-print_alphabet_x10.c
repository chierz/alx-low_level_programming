#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet 10 times
 *Return: 0 is success
 */

void print_alphabet_x10(void)
{
	int t;
	char i;

	for (t = 0 ; t < 10 ; t++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar (i);
			_putchar ('\n');
	}

}
