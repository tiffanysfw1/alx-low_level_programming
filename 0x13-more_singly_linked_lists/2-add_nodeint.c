#include "lists.h"
/**
 * add_nodeint - adds the node inside the lists
 * @head: input head of link
 * n: new node
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nnode;
nnode = malloc(sizeof(listint_t));
if (nnode == NULL)
return (NULL);
nnode->n = n;
nnode->next = *head;
*head = nnode;
return (nnode);
}
