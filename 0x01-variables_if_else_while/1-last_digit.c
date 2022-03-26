#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int n;
  int digit;
 
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  digit = n % 10;
  printf("Last digit of ");
  printf("%d", n);
  printf(" is ");
  printf("%d", digit);
  printf(" and is ");
  if (digit > 5)
  {
    printf("greater than 5\n");
  }
  else if ((digit < 5) && (digit != 0))
  {
    printf("less than 6 and not 0\n");
  }
  else
  {
    printf("0\n");
  }
  return (0);
}
