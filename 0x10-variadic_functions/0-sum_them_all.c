#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all- returns sum of all its parameters
 * @n: number of parameters passed to the function
 * @...:a variable nmber of parameters to calculate the sum off
 *
 * Return: 0 if n==0
 * Otherwise Return the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;
	sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
