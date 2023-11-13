#include "main.h"
/**
 * _strlen - length of a string
 * @c: pointer parameter a
 * Description: length  pointer value
 * Return: integer
 */

int _strlen(char *c)
{

	int i = 0;
	for (i = 0; c[i] != '\0';)
	{
		i++;
	}
	return (i);
}
