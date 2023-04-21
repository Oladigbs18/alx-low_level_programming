#include <stdio.h>
/**
 * main - I play what I call the alphabet game
 * Desription: 'to print alphabet in lowercase'
 * Return: 0 (Always 0)
 */
int main(void)
{
	int n;
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
