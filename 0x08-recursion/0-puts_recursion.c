#include "main.h"
/**
*_puts_recusion - function like puts()
*@s:input
*Return: always 0
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
