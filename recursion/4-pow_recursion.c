#include "main.h"
/**
* _pow_recursion - function that returns the value of x
* raised to the power of y. RECURSIVLY !
* @x: explains in "betty" that we are working on the variable x.
* @y: explains in "betty" that we are working on the variable y.
* Return: numbers x to the power of y.
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
