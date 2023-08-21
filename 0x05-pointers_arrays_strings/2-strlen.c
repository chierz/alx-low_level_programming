#include "main.h"
#include <stdio.h>

/**
 *_strlen - returns length of string
 *@str: string whose leght is to be returned
 *Return: 0 is success
 */

int  _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
