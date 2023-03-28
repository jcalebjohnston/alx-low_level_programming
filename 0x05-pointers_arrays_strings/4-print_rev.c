#include "main.h"

/**
 * main: Return string in reverse
 *
 */
void print_rev(char *s)
{
	int stringlength = 0;
	int i;

	while (*s != '\0')
	{
		stringlength++;
		s++;
	}
	s--;
	for (i = stringlength; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');

}
