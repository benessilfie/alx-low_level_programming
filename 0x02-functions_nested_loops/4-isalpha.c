#include "main.h"
/**
 * main - Entry point
 * Description: A function that checks for alphabetic character.
 * Return: Always 0 (Success)
 */
int _isalpha(int alphaBet)
{
return ((alphaBet >= 97 && alphaBet <= 122) || (alphaBet >= 65 && alphaBet <= 90));
}
