#include "lists.h"
/**
 * get_nodeint_at_index - print the 7th node
 * @head: head
 * @index: index
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *hen = head;
while (hen && count < index)
{
hen = hen->next;
count++;
}
return (hen);
}
