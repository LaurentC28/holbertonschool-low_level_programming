#include "main.h"
/**
 * verif - function to find the divider of n
 * @n: number input.
 * @i: divider to find.
 * Return: 0 if don't find.
 */
int verif(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (verif(n, i + 1));
	}
}
/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: number to find
 * Return: 1 if the input is a prime number.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (verif(n, 2));
}
