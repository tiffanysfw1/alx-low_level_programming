#include "lists.h"
/**
 * pop_listint - deleteds head node
 * @head: head of linked list
 * Return: data from the linked data
 */
int pop_listint(listint_t **head)
{
listint_t *copy_head = *head
int rtrn_val;
if (copy_head)
{
rtrn_val = copy_head->n;
*head = copy = co[y_head->next;
free(copy_head);
}
else
rtrn_val = 0;
return (rtrn_val);
}
