#include "main.h"
/**
 *_islower - checks and returns 1 when c is lower case and 0 if not
 *@c: the characters
 *Return: return type
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
