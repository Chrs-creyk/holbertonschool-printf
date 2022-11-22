#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
    int len, len2;

    len = _printf("%d\n", 1024);
    len2 = printf("%d\n", 1024);
    fflush(stdout);
    if (len != len2)
    {
        printf("%d\n", len);
        printf("%d\n", len2);
        printf("Lengths differ.\n");
        fflush(stdout);
        return (1);
    }
    return (0);
}