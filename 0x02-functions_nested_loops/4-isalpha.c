#include "main.h"

/**
 *_isalpha - checks if c is an alphabat
 *Return: 1 if it s and 0 if not
 *@c: the characters
 */

int _isalpha(int c)

{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
