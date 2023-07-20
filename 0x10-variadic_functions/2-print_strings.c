#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints string
 * @separator: string to be printed between the string
 * @n:  number of strings passed to the function
 * Return: ...
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	char *s;

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(x, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

					if (i < n - 1)
					if (separator)
					printf("%s", separator);
	}
					printf("\n");
					va_end(x);
}
