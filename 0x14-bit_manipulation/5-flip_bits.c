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
unsigned long int mask = 0, count = 0;

mask = n ^ m;
while (mask)
{
if (mask & 1)
count++;
mask >>= 1;
}

return (count);
}
