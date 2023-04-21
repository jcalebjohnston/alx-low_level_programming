#include <stdio.h>
#include "variadic_functions.h"

/**
 * _putchar- writes the character c to stdout
 * @c- character to input
 *
 * Return - on success(1)
 * on error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
