#include "lists.h"
/**
 * add_nodeint_end - adds new node at the end of the list
 * @head: start of linked lists
 * @n: new number
 * Return: new node or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nnode, *hen;
nnode = malloc(sizeof(listint_t));
if (nnode == NULL)
return (NULL);
nnode->n = n;
nnode->next = NULL;
if (!*head)
*head = nnode;
else
{
hen = *head;
while (hen->next)
hen = hen->next;
hen->next = nnode;
}
return (nnode);
}
