#include "main.h"

/**
 * print_line - draws a straight line in terminal
 * @n: number of times '_' should be printed
 * Return: returns nothing
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
