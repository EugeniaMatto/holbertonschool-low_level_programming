#include<stdio.h>
void frase(void) __attribute__ ((constructor));
/**
 * frase - imprime frase antes de que main se ejecute
 */
void frase(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

