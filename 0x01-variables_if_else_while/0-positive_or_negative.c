#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - How to assign a random variable in c
 * Description: 'To assign a random variable each time n is executed'
 * Return: 0 (Always 0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is postive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
