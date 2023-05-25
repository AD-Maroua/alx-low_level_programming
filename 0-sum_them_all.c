#include "variadic_functions.h"

/**
 * sum_them-all - sums vatiable arguments
 * @n: the number of arguments
 * @...: A variable number of paramters to calculate the sum of.
 * Return: the integer sum
 **/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = n;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
