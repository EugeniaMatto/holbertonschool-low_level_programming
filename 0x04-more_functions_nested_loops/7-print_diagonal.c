#include "main.h"
/**
 * print_diagonal - asd
 * @n: ad
 */
void print_diagonal(int n)
{
    int i;
    int b;
        
    for (i = 1; i <= n; i++)
    {
        for (b = 1; b < i; b++)
            _putchar(' ');
        _putchar('\\');
        if (i != n)
            _putchar('\n');
    }
    _putchar('\n');
}
