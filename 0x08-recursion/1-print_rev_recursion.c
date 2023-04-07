#include "main.h"

/**
 * a function that prints a string in reverse.
 * return:string in reverse
 * @s:string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
