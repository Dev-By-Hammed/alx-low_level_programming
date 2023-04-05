#include "main.h"

/**
 * is_prime - detects if the input integer is a prime number.
 * @n: the input number.
 * @m: the iterator.
 * Return: 1 if n is prime number. if it's n is not.
 */
int is_prime(unsigned int n, unsigned int m)
{
	if (n % m == 0)
	{
		if (n == m)
			return (1);
		else
			return (0);

	}
	return (0 + is_prime(n, m + 1));
}
/**
 * is_prime_number - detects if the input integer is a prime number.
 * @n: the input number.
 * Return: 1 if n is prime number. 0 if it's not
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
