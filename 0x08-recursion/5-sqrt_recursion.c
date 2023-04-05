#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number.
 * @n: the input number.
 * Return: always 0.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (helper(n, 1));

}

/**
 * helper - the blank
 * @n: the number
 * @m: the incrementor
 * Return: -1.
 */
int helper(int n, int m)
{
	if (n == (m * m))
		return (m);
	else if (n > (m * m))
		return (helper(n, m + 1));
	else
		return (-1);
}


