#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @a: The pointer to the string.
 *
 * Return: The lenght of the string.
 */
int _strlen(char *a)
{
	int len;

	while (a)
		len++;
	return (len);
}
/**
 * _print_rev - Prints out a string in reversed order to the
 *             standard output, recursibely.
 * @a: The pointer to the string.
 *
 * Return: number of printed char.
 */
int _print_rev(char *a)
{
	if (*a == '\0')
	{
		return (_strlen(a));
	}

	_print_rev(a + 1);
	_putchar(*a);
}
