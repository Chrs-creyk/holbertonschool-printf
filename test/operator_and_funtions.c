#include "main.h"

int print_char(va_list ch)
{
    char c;

    c = va_arg(ch, int);

    write(1, &c, 1);
    return (1);
}

int print_string(va_list str)
{
    int j = 0;
    char *s;

    s = va_arg(str, char *);

    if (s == NULL)
    {
        write(1, "(null)", 6);
        return (6);
    }

    while (s[j] != '\0')
        j++;
    write(1, s, j);
    return (j);
}

int print_number(va_list totals)
{
    int n, n2 = n, n3 = n, j = 0, i = 0, dig_count = 0;
    char num[] = "12345678910", dig;

    n = va_arg(totals, int);
    if (n == 0)
    {
        write(1, "0", 1);
        return (1);
    }
    while (n2 != 0)
    {
        dig_count++;
        n2 = n2 / 10;
    }
    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return (11);
    }
    if (n < 0)
    {
        n3 = n * -1;
        for (; j < dig_count; j++)
        {
            dig = '0' + (n3 % 10);
            num[dig_count - j - 1] = dig;
            n3 = n3 / 10;
        }
        write(1, "-", 1);
        write(1, &num[0], dig_count);
        return (dig_count + 1);
    }
    n2 = n;
    for (; i < dig_count; i++)
    {
        dig = '0' + (n2 % 10);
        num[dig_count - i - 1] = dig;
        n2 = n2 / 10;
    }
    write(1, &num[0], dig_count);
    return (dig_count);
}