#include "main.h"
/**
 * puts2 - function should print only one character out of two
 *
 * Return: One character of two
 */
void puts2(char *str)
{
	int stringlength = 0;
	int j = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		stringlength++;
	}
	j = stringlength - 1;
	for (i = 0 ; i <= j ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
