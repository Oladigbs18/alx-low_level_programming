#include <stdio.h>
/**
 * main - How to print alphabets in lowercase
 * Description: 'to print lowercase alphabets except q and e'
 * Return: 0 (Always 0)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 113 || n == 101)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
