#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet completel, 10 times
 * Return: returns nothing
 */
void print_alphabet_x10(void)
{
	int alpha;
	int rep;

	for (rep = 0; rep < 10; rep++)
	{
		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
