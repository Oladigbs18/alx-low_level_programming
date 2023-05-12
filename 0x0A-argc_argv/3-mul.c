#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for AAliyah
 * @argc: the number of command line arguments
 * @argv: the array of command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, mul = 0;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);

	return (0);
}
