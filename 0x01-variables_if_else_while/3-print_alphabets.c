#include <stdio.h>
/**
 * main - How to print lowercase and uppercase alphabets
 * Description: 'to print both lowercase and uppercase alphabets all together'
 * Return: 0 (Always 0)
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
