#include "main.h"

int comp(char n, ...)
{
	va_list format;
	char x = 126;
	char letra = 32;

	va_start(format, n);

	while (letra < x)
	{
		if (letra == n)
			return (letra);
		letra++;
	}
	va_end (format);
	return (0);
}
int _strlen(void)
{
	int lenght = 0;

	while (lenght != '\0')
	{
		lenght++;
	}
	return (lenght);
}

int _printf(const char *format, ...)
{
	int x = 0, y = 0;

	x = strlen(format);

	while (y < x)
	{
		write(comp);
		y++;
	}
	return (0);
}
