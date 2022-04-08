#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Print the alphabet in lowercase & uppercase.
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphaBet = 'a';
while (alphaBet <= 'z')
{
putchar(alphaBet);
alphaBet++;
}
char alphabet = 'A';
while (alphaBet <= 'Z')
{
putchar(alphaBet);
alphaBet++;
}
putchar('\n');
return (0);
}
