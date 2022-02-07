#include "main.h"
/**
 * _isalpha - mayus
 * @c: a verificar
 * Return: 1 si es letra 0 si no
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
