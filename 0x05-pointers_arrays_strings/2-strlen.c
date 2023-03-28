#include "main.h"

/**
 * main: Return length of a string
 *
 * Returns: strlen
 */
int _strlen(char *s)
{
	int stringlength = 0;

	while (*s != '\0')
	{
		stringlength++;
		s++;
	}
	return (stringlength);
}
