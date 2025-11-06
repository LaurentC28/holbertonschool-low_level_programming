#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - program that adds positives numbers.
 * If no number is passed to the program, print 0, followed by a new line.
 * If one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc ; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit((unsigned char)argv[i][j]))
			{
				printf("Erreur\n");
				return (1);
			}
		}
	sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
