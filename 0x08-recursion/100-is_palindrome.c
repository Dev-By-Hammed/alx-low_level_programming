#include "main.h"

/**
 * _strlen_recursion - shows the lenght of astring.
 * @s: the strin.
 *Return: lenght of the string .
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator - compares each characters of the strings.
 * @s: the string
 * @m1: the smallest iterator.
 * @m2: the biggest iterator.
 * Return: 0 always.
 */

int comparator(char *s, int m1, int m2)
{
	if (*(s + m1) == *(s + m2))
	{
		if (m1 == m2  || m1 == m2 + 1)
			return (1);
	return (0 + comparator(s, m1 + 1, m2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detectcts if a strings is palindrome.
 * @n: the string.
 * Return: 1 if n is palindrome , 0 if it's not.
 */

int is_palindrome(char *n)
{
	if (*n == '\0')
		return (1);
	return (comparator(n, 0, _strlen_recursion(n) - 1));
}
