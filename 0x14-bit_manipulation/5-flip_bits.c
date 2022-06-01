#include "main.h"
/**
  * flip_bits - Returns the num of bits you wd need to flip to get frm 1 num to another.
  * @n: initial number
  * @m: final number
  *
  * Return: The number of bits flipped.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flipped = n ^ m;
int count = 0;

while (flipped)
{
if (flipped & 1)
count++;
flipped >>= 1;
}
return (count);
}
