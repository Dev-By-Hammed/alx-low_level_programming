#include <stdio.h>

/**
 * main - it  Print out  numbers from 0 to 9, 
 *each numbers are seperated by comma and followed by  with spaces.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
