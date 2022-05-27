#include <stdio.h>
#include "lists.h"
/**
  * print_listint - a function that returns the number of 
  * elements in a linked listint_t list.
  * @h: The head of the linked list
  *
  * Return: The number of elements in the linked list
  */
size_t print_listint(const listint_t *h)
{
int count = 0;
if (h != NULL)
{
while (h)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
}
return (count);
}
