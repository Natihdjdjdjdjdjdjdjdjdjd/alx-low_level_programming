#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format:  is a list of types of arguments passed to the function
 * Return: ...
 */
void print_all(const char * const format, ...)
{
	va_list x;
	unsigned int i = 0, j, c = 0;
	char *s;
	const char t_arg[] = "cifs";

	va_start(x, format);

	while (format && format[i])

	{

		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(x, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(x, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(x, double)), c = 1;
				break;
			case 's':
				s = va_arg(x, char *), c = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		i++;
	}
	printf("\n"), va_end(x);
}

