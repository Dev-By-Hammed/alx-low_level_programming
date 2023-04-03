#include "main.h"
/**
 * _memcpy - it copies memory area,
 * @dest: the destination of the memory area.
 * @src:it  source the memory area.
 * @n: the bytes occupied.
 * Return: the pointer to the destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

		*(dest + i) =  *(src + i);

	return (dest);
}
