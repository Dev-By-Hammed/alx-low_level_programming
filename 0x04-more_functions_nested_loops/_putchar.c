#include <unistd.h>
#include "main.h"

/**
 *_putchar - writes the character c into stdout.
 *@c: is the character to printout.
 *Return: 1 if success.
 *return -1 if there is error 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
