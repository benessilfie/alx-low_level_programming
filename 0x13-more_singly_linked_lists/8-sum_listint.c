#include "lists.h"
/**
  * sum_listint -  returns the sum of all the data (n) of a linked list.
  * @head: The head of the linked list.
  * 
  * Return: return 0, if the list is empty.
  */
int sum_listint(listint_t *head)
{
listint_t *acc = head;
int amount = 0;
while (acc)
{
amount += acc->n;
acc = acc->next;
}
return (amount);
}
