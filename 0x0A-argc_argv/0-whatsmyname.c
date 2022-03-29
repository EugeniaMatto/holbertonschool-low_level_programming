#include <stdio.h>
/**
 * main - das
 * @argc: cont argumentos
 * @argv: argumentos
 * Return: sada
 */
int main(int argc, char *argv[])
{
int i = 0;
for (i = 0; i < argc; i++)
{
if (i == 0)
printf("%s\n", argv[0]);
}
return (0);
}
