#include <stdio.h>
/**
 * main - How to print lowercase letters in c
 * Description: 'to print lowercase letters in reverse form
 * Return: o (Always 0)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
