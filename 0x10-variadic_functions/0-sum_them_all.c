#include "variadic_functions.h"

/**
 * sum_all - returns the sum value
 * of all its given parameters.
 * @n: this tells us
 * the amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_all(const unsigned int n, ...)
{
	va_list varlist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(varlist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(varlist, int);

	va_end(varlist);

	return (sum);
}
