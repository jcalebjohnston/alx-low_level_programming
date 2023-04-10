#include "main.h"
#include <stdio.h>

/**
 *main-a program that prints its name, followed by a new line.
 *@argc-arguments count
 *@argv-argument vector
 * Return: 0(success)
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);

	return (0);
}
