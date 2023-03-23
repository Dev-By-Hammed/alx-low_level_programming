#include "main.h"

/**
 *_isupper - checks if a parameter is uppercase character.
 *@c: input characters.
 *Return: 1 if it's an uppercase character, and 0 in different case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);

	}
	else
	{
		return (0);

	}
}
