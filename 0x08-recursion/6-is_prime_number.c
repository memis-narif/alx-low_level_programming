#include "main.h"

int actual_prime(int n, int i);
/**
*is_prime_number-chechs if an integer is a prime number or not
*@n: number to evaluate
*Return: 1 if n is a prime number, 0 if not
*/
int is_prime_number(int n)
{
	if (n <=  1)
		return (0);
	else
		return (actual_prime(n, 2));
}
/**
*actual_prime - calculates if a number is prime recursively
*@n: number to evaluate
*@i: iterator
*Return: 1 if n is prime, 0 if not
*/
int actual_prime(int n, int i)
{
	if (n % i == 0 && n != i)
		return (0);
	else if (i == n)
		return (1);
	else
		return (actual_prime(n, i + 1));
}

