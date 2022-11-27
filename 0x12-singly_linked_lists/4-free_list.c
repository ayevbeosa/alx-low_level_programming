#include "lists.h"
/**
 * free_list - free the memory allocated to a linked list
 * @head: a double pointer to a linked list
 * Return: nothing
 * THERE IS MORE WORK TO BE DONE IN THIS FUNCTION
 */

void free_list(list_t *head)
{
list_t *current_node;

while ((current_node = head) != NULL)
{
head = head->next;
free(current_node->str);
free(current_node);
}
}
