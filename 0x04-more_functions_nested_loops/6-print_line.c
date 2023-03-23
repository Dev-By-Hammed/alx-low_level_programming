#include "main.h"

/**
 *print_line - prints straight line in terminal.
 *@n: number times time line is printed.
 *Return: nothing.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
