/*
** EPITECH PROJECT, 2020
** swap
** File description:
** swap
*/

#ifndef SWAP_H_
#define SWAP_H_

typedef struct list {
    int data;
    struct list *next;
} list_t;

void list_swap(list_t *head);
void list_move(list_t **first, list_t **second);
void list_rotate(list_t **head);
void list_reverse_rotate(list_t **head);
int is_sort(list_t *head);
void list_push(list_t **head, int data);
void list_stack(list_t **head, int data);
void list_destroy(list_t *head);
void list_remove(list_t **head, int index);
void list_show(list_t *head);

#endif /* !SWAP_H_ */