#include "main.h"
/**
 * main - Entry point
 * Description: A function that prints the last digit of a number.
 * Return: Always 0 (Success)
 */

int print_last_digit(int result)
{
int lastDigit;
lastDigit = result % 10;
if (lastDigit < 0)
{
lastDigit = (lastDigit * -1);
}
_putchar(lastDigit + '0');
return (lastDigit);
}
