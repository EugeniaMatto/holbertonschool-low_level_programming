#include "main.h"
/**
 * swap_int - intercambio de valores
 * @a: a
 * @b: se intercambiaran los valores entre a y b
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
