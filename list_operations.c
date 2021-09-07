/*
** EPITECH PROJECT, 2020
** list ops
** File description:
** list_operations
*/

#include "my.h"
#include "swap.h"

void list_swap(list_t *head)
{
    int tmp = head->next->data;
    head->next->data = head->data;
    head->data = tmp;
}

void list_move(list_t **first, list_t **second)
{
    if ((*second) == NULL)
        return;
    list_push(first, (*second)->data);
    list_remove(second, 0);
}

void list_rotate(list_t **head)
{
    list_stack(head, (*head)->data);
    list_remove(head, 0);
}

void list_reverse_rotate(list_t **head)
{
    list_t *nav = (*head);
    int i = 0;
    while (nav->next != NULL) {
        nav = nav->next;
        i++;
    }
    list_push(head, nav->data);
    list_remove(head, i + 1);
}