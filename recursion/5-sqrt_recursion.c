#include "main.h"
/**
 * compteur - helper function to find the natural square root of n
 * @n: number to find the square root of
 * @i: current candidate
 * Return: the square root if it exists, -1 otherwise
 */

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 * Return: natural square root of n, -1 if none exists
 */
int compteur(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (compteur(n, i + 1));
	}
}
int _sqrt_recursion(int n)
{
	if (n == 0)
	return (0);
	return (compteur(n, 1));
}
