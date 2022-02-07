#include <stdio.h>
/**
 *  print_alphabet - imprime el alfabeto
 *
 *  Return: always void
 */
void print_alphabet(void)
{
char a;
for (a = 'a' ; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
}
