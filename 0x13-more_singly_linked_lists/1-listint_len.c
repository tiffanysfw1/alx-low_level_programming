#include "lists.h"
/**
 * listint_len - return the number of elements
 * @h: head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
unsigned int i = 0;
const listint_t *hen = h;
for (; hen; hen = hen->next)
i++;
return (i);
}
