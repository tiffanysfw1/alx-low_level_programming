#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees the lists
 * @head: head of linked lists
 * Return: lists
 */
void free_listint2(listint_t **head)
listint_t *hen;
if (head == NULL)
{
return;
}
hen = *head;
*head =  NULL;
free_listint(hen)
}
