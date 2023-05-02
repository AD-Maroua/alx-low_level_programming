#include "main.h"

/**
 * print_line - print a straight line
 * @n: The number of lines to draw
 * Return: empty
 **/

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			_putchar('_');
		_putchar('\n');
	}
}