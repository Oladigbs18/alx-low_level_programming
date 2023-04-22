#include <stdio.h>
/**
 * main - How to write numbers in ascending order
 * Description: 'to print numbers with spaces included'
 * Return: 0 (Always 0)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
