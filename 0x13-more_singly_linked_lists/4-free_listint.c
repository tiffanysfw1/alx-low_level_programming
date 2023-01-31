#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * free_listint - function that free the lists
 * @head: head of the list
 * Return: lists
 */
void free_listint(listint_t *head)
{
if (head == NULL)
{
return;
}
free_listint(head->next);
free(head);
}
