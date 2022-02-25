#include <stdio.h>
/**
 * main - das
 * @argc - cont argumentos
 * @argv - argumentos
 */
int main(int argc, char *argv[])
{
int i = argc - 1;
int x = 0;
while (argv[x])
{
x++;
}
printf("%d\n", (i));
return (0);
}
