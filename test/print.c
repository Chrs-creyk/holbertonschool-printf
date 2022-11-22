#include "main.h"

int _printf(const char *format, ...)
{
	va_list list;
	int redic = 0;

	fmt_t cases[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_number},
		{"i", print_number},
		{NULL, NULL}};

	if (format == NULL)
		return (-1);
	va_start(list, format);
	redic = print_op(format, cases, list);
	va_end(list);
	return (redic);
}
