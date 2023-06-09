#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#define min(x, y) (((x) < (y)) ? (x) : (y))

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int len(char *str);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
void *malloc_checked(unsigned int b);

/*functions for 101-mul.c */

/**
 * error_exit - prints error with _putchar
 *              and exits with 98
 *
 * Return: Error 98 and exit(98)
*/

int error_exit(void)
{
	char *err;
	int i;

	err = "Error";
	for (i = 0; err[i] != '\0'; i++)
		_putchar(err[i]);
	_putchar('\n');
	exit(98);
}

/**
 * check_number - checks if string has only
 *                numbers
 *
 * @str: string to check
 *
 * Return: 0 is true 1 if false
*/

int check_number(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}

/**
 * _length - get the length of strings
 *
 * @str: string to get length of
 *
 * Return: length of string
*/

int _length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

#endif /* MAIN_H */
