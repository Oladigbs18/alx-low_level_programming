#include <stdio.h>
/**
 * main - check the code for AAliyah
 * @argc: the number of command line argument
 * @argv: the array of command line agument
 *
 * Return: 0 (Always 0)
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; 1 < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
