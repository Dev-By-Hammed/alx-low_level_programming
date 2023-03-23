#include "main.h"

/**
 *_isdigit - check for a number between 0 and 9.
 *@c: input number.
 *Return: 1 if it's a number between 0 and 9, and 0 in different case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);

	}
	else
	{
		return (0);

	}
}
