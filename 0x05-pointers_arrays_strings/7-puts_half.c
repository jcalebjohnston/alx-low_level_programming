#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd string length, n = (length_of_the_string - 1) / 2
 *
 * Return: half of string input
 */
void puts_half(char *str)
{
	int i, j;

	int stringlength = 0;

	for (i = 0; str[i] != '\0'; i++)
		stringlength++;

	j = (stringlength / 2);

	if ((stringlength % 2) == 1)
		j = ((stringlength + 1) / 2);

	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
