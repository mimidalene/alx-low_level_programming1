#include "main.h"

/**
  * _memset - fills memory with constant byte
  * @s: pointer
  * @b: constant byte
  * @n: number of bytes of memory area.
  * Return: Pointer to memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
