#include "variadic_functions.h"

/**
 * print_strings - a code
 * that prints strings.
 * @separator: this shows the string
 * to be printed between the strings.
 * @n: gives the number of strings
 * passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list varlist;
	unsigned int i;
	char *str;

	va_start(varlist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(varlist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(varlist);
}
