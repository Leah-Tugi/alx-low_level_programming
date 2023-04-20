#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_int - prints int
 * @list: arguments from print_all
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_float - prints float
 * @list: arguments from print_all
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_char - prints int
 * @list: arguments from print_all
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_str - prints string
 * @list: arguments from print_all
 */
void print_str(va_list list)
{
	char *s = va_arg(list, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);
}
/**
 * print_all - prints any type
 * @format: arguments to print
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j = 0;
	char *sep = "";
	printTypeStruct printType[] = {
		{ "i", print_int },
		{ "f", print_float },
		{ "c", print_char },
		{ "s", print_str },
		{NULL, NULL}
	};
	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		while (printType[j].type != NULL && printType[j].type[0] != format[i])
			j++;
		if (printType[j].type != NULL)
		{
			printf("%s", sep);
			printType[j].printer(list);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
