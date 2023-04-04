#include "main.h"
/**
 * _memset - n bytes of memory should contain a constant value.
 * @a: refers to a memory location
 * @b: constant value
 * @n: byte count to fill
 * Return: memory location
 */

char *_memset(char *a, char b, unsigned int n)
{

int size = n;

if (size > 0)
{
int i;

for (i = 0; i < size; i++)
a[i] = b;
}
return (a);
}
