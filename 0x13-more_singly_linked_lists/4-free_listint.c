#include "lists.h"
/**
 * free_listint - function that free the lists
 * @head: head of the list
 * Return: lists
 */
void free_listint(listint_t *head)
{
listint_t *temp
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
