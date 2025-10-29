#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: explains in "betty" that we are working on the variable a
 * @b: explains in "betty" that we are working on the variable b
 *
 * Return: no return.
 */

void swap_int(int *a, int *b)
{
int temp = 0;

temp = *b; /*la variable temp "prend" la valeur de l'adresse de b*/
*b = *a; /*la valeur de l'adresse de b prends la valeur de l'adresse de a*/
*a = temp;
}
