#include "lists.h"
/**
 * reverse_listint - reverse linked list
 * @head: link
 * Return: pointer to lists
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *post_node, *pre_node = NULL;
while (head && *head)
{
post_node = (*head)->next;
(*head)->next = pre_node;
pre_node = *head;
*head = post_node;
}
*head = pre_node;
return (*head);
}
