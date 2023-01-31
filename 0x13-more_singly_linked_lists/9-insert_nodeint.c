#include "lists.h"
/**
 * insert_nodeint_at_index -  function that insert new node
 * @head: head
 * @idx: index
 * @n: new node
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *nnode, *tnode = *head;
unsigned int i = 0;
while (tnode && i < idx - 1)
{
tnode = tnode->next;
i++;
}
if (tnode || (i == idx - 1 || idx == 0))
{
nnode = malloc(sizeof(listint_t));
if (nnode)
{
nnode->n = n;
if (idx == 0)
{
nnode->next = *head;
*head = nnode;
}
else
{
nnode->next = tnode->next;
tnode->next = nnode;
}
return (nnode);
}
}
return (NULL);
}
*head =
