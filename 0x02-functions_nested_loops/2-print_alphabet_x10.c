#include "main.h"
/**
 * print_alphabet_x10 - sadsa
 */
void print_alphabet_x10(void)
{
int i;
char a;
for (i = 0 ; i < 10 ; i++)
{
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
}
if (i != 9)
{
_putchar('\n');
}
}
}
