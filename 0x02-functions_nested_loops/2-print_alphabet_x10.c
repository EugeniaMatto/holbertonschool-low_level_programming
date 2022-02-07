#include "main.h"
/**
 * print_alphabet_x10 - sadsa
 */
void print_alphabet_x10(void)
{
int i;
char a;
for (i = 0 ; i < 11 ; i++)
{
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
}
if (i != 10)
{
_putchar('\n');
}
}
}
