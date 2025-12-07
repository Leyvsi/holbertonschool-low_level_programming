#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to the first node of the list
 *
 * Description: free the memory allocated for each node and its string
 */

void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
