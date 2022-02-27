#include "main.h"

/**
 * _puts - check the code
 * @str: string
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;
	char a = ' ';
	int x = _strlen(str) - 1;

	while (i <= x)
	{
		a = str[i];
		_putchar(a);
		i++;
	}
	_putchar('\n');
}

/**
 * _strlen - check the code
 * @s: string
 * Return: Always 0.
 */
int _strlen(char *s)
	{
	int count;
	char c;

	c = *s;
	count = 0;

	while (c != '\0')
	{
	count++;
	c = *(s + count);

	}
	return (count);
	}
