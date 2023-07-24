#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_all- a function that prints anything pased to it
 *@format: a constant char pointer
 */
void print_all(const char * const format, ...)
{
	/*Variables*/
	unsigned int i = 0, j = 0;
	char *separator = "";
	f func_type[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list args;
	/*start argument iteratons*/
	va_start(args, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			/*verify if the cases match anything we have*/
			if (format[i] == *func_type[j].id)
			{
				func_type[j].func(separator, args);
				separator = ", ";
			} /*end if*/
			j++;
		} /*end inner for*/
		i++;
	} /*end outer for*/
	va_end(args);
	printf("\n");
} /*end fucntion*/

/**
 *print_char- a function that prints a char
 *@separator: points to a char with something assigned
 *@args: argument of the list
 */
void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
} /*end char*/

/**
 *print_int- a function that prints an int
 *@separator: points to a char with something assigned
 *@args: argument of the list
 */
void print_int(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
} /*end int*/

/**
 *print_float- a function that prints an float
 *@separator: points to a char with something assigned
 *@args: argument of the list
 */
void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
} /*end float*/

/**
 *print_string- a function that prints an string
 *@separator: points to a char with something assigned
 *@args: argument of the list
 */
void print_string(char *separator, va_list args)
{
	char *string;
	string = va_arg(args, char *);
	/*chec if string is empty*/
	if (args == NULL)
		string = "(nil)";
	printf("%s%s", separator, string);
} /*end string*/
