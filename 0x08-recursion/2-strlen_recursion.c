#include "main.h"

/**
 * a function that returns the length of a string.
 * return:the length of a string
 * @s:input
 */
int _strlen_recursion(char *s)
{
	int strlen = 0;

	if(*s)
	{
		strlen++;
		strlen += _strlen_recursion(s + 1);
	}
	return(strlen);
}
