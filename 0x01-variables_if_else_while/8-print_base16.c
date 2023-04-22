#include <stdio.h>
/**
 * main - How to print base 16 numbers
 * Description: 'to print numbers from 0 to 15 in base 16'
 * Return: 0 (Always 0)
 */
int main(void)
{
	int n = 48;
	int m = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (m <= 101)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
