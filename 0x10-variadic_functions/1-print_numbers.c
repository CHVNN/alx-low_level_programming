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
	unsigned int x;

	var_start(varlist, n);

	for (x = 0; x < n; i++)
	{
		printf("%d", va_arg(varlist, int));
		if (separator && x < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	var_end(varlist);
}
