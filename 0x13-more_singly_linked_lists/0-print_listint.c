#include "lists.h"
/**
 * print_listint - prints elements
 * @h: head of linked list
 * Return: elements
 */
size_t print_listint(const listint_t *h)
{
unsigned int i = 0;
const listint_t *hen = h;
while (hen)
{
printf("%d\n", hen->n);
hen = hen->next;
i++;
}
return (i);
}
