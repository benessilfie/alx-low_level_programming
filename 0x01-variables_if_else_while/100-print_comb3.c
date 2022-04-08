#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: A program that prints all possible different
 * combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
int digits;
for (digits = 0; digits < 90; digits++)
{
for()
{
putchar((digits / 10) + '0');
putchar((digits % 10) + '0');
}
if (digits != 89)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
