#include "main.h"
/**
* factorial - function that returns the factorial of a given number.
* RECURSIVLY
* @n: explains in "betty" that we are working on the pointer s.
* Return: numbers of charactères.
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
