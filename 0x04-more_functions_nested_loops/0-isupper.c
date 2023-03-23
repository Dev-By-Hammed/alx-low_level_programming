#include "main.h"

/**
 *_isupper - check uppercase character in parameter.
 *@c: input character.
* Return: 1 if it's an uppercase and return 0 if its not.
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
