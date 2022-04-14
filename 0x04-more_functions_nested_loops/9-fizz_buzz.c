#include "main.h"
/**
 * main - a program that prints the numbers from 1 to 100.
 * Return: Always 0.
 */
int main(void)
{
int i;
char multiplesOfThree[] = "Fizz";
char multiplesOfFive[] = "Buzz";
char multiplesofBoth[] = "FizzBuzz";
for (i = 1; i <= 100; i++)
{
if (i == 100)
printf("%s", multiplesOfFive);
else if ((i % 3 == 0) && (i % 5 == 0))
printf("%s ", multiplesofBoth);
else if (i % 3 == 0)
printf("%s ", multiplesOfThree);
else if (i % 5 == 0)
printf("%s ", multiplesOfFive);
else
printf("%d ", i);
}
printf("\n");
return (0);
}
