#include<stdio.h>

/**
 * main - two loops that print the alphabet lower and upper case
 * Return: return 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	         putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
	         putchar(j);
        putchar('\n');
	return (0);
}
