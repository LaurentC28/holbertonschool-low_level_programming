#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * fizz_buzz - Write a program that prints the numbers from 1 to 100.
 * description - the multiple of 3 & 5 replaced.
 * main - Programm Entry
 * Return: return.
 */

int main(void)
{
int i;

for (i = 1 ; i <= 100 ; i++)
{

	if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz");
	}
	else if (i % 5 == 0)
	{
	printf("Buzz");
	}
	else if (i % 3 == 0)
	{
	printf("Fizz");
	}
	else
	{
	printf("%d", i);
	}

	if (i < 100)
	printf(" ");
}
printf("\n");
return (0);
}
