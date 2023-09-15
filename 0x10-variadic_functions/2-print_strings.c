#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - display strings with a new line \n
 * @separator: separator
 * @n: The number of arguments
 * @...: A variable unknown arguments
 * Description: display strings in a specified format
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;
	char *str;

	va_start(args, n);
	for (j = 0; j < n; j++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}

		printf("%s%s", j == 0 ? "" : separator != NULL ? separator : "", str);

	}
	va_end(args);
	printf("\n");
}
