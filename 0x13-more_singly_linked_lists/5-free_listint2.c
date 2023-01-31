#include "lists.h"
/**
 * free_listint2 - function that frees the lists
 * @head: head of linked lists
 * Return: lists
 */
void free_listint2(listint_t **head)
{
listint_t *hen;
if (head)
{
while (*head)
{
hen = *head;
*head = hen->next;
free(hen);
}
}
}
