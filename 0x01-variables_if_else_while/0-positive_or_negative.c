#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more header gors there */

/**
 * main - the man function
 * Return: return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - Rand_Max / 2;
	if (n > 0)
		printf("%d is postive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf(%d is negative\n", n);
	return (0);
}

