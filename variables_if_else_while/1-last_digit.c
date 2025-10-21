#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: displays the last digit of a random number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
int m = % 10 n;
	
if (m > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, m);
}
else if (m == 0)
{
printf("Last digit of %d is %d and is 0", n, m);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
}
	return (0);
}
