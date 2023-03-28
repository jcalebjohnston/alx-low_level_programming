#include "main.h"

/**
 * main: swaps the values of two integers
 *
 * Return: Null
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
