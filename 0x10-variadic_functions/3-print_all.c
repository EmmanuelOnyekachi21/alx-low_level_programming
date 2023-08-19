#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_all - Entry point
 * @format: list of types of arguments passed to the function.
 *
 * Description: prints anything.
 *
 * Return: Returns nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char c;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				{
					const char *str = va_arg(args, const char *);

					if (str == NULL)
						printf("(nil)");
					else
						printf("%s", str);
				}
				break;
		}
		if (format[i + 1] != '\0' && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			                        printf(", ");

		i++;
	}

	printf("\n");
	va_end(args);
}
