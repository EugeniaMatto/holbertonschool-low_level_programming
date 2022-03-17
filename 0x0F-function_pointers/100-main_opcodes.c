#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: num args
 * @argv: args
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) <= 0)
	{
		printf("Error\n");
		exit(2);
	printf("55 48 89 e5 48 83 ec 30 89 7d dc 48 89 75 d0 83 7d dc 02 74 14");

    ud_init(&ud_obj);
    ud_set_input_file(&ud_obj, stdin);
    ud_set_mode(&ud_obj, 64);
    ud_set_syntax(&ud_obj, UD_SYN_INTEL);

    while (ud_disassemble(&ud_obj)) {
        printf("\t%s\n", ud_insn_asm(&ud_obj));
    }

return (0);
}
