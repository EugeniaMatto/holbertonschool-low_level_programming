#include "main.h"
/**
 * _print_chessboard - daads
 * @a: ads
 * @8: ad
 *
 */
void print_chessboard(char (*a)[8])
{
int i, x;
char z;
for (i = 0; i < 8; i++)
{
	for (x = 0; x < 8; x++)
	{
	z = a[i][x];
	_putchar(z);
	}
_putchar('\n');
}
}
