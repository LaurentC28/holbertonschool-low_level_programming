#include <stdlib.h>
#include <stdio.h>
/**
 * main - function to print is first argument (his name).
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s", argv[0]);
	printf("\n");
	return (0);
}
