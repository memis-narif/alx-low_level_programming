#include "main.h"
/**
*_strlen_recursion - Returns the lenth of a string.
*@s: The string to be measured.
*Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
	int logit = 0;

	if (*s)
	{
		logit++;
		logit += _strlen_recursion(s + 1);
	}

	return (logit);
}
