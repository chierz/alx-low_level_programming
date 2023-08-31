#include "main.h"

/**
 *is_palindrome - fxn dat checks if a string is a palindrome or not
 *@s:pointer to the string
 *Return: retrn 1 if a string is a palindrome and 0 if not
 *@i:iterator
 *@len:length of string
 */

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 *_strlen_recursion - returns the length of a string
 *@s: string whose length is to be calculated
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 *check_pal - checks the characters recursively for palindrone
 *@s: string to check
 *@len: length of the string
 *@i: iterator
 *Return: 1 if palindrone, 0 if not
 */

int check_pal(char *s, int i, int len)
{
	if (i >= len)
		return (1);
	if (*(s + i) != *(s + len - 1))
		return (0);
	return (check_pal(s, i + 1, len - 1));
}
