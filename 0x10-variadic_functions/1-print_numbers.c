#include "variadic_functions.h"

/**
 * print_numbers - this code
 * prints numbers.
 * @separator: this shows the string
 * to be printed
 * between numbers.
 * @n: shows the number of integers
 * passed to the function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list varlist;
	unsigned int i;

	va_start(varlist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(varlist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(varlist);
}
