/*
** EPITECH PROJECT, 2020
** core
** File description:
** core
*/

#include "my.h"
#include "swap.h"

int is_sort(list_t *head)
{
    list_t *nav = head;
    while (nav->next != NULL) {
        if (nav->data > nav->next->data)
            return 0;
        nav = nav->next;
    }
    return 1;
}

void sort_this(list_t **lista, list_t **listb)
{
    while (!(is_sort((*lista)) == 1 && (*listb) == NULL)) {
        if ((*lista)->data > (*lista)->next->data) {
            list_swap(*lista);
            write(1, "sa", 2);
        }
        else if ((*lista)->next->next != NULL && is_sort((*lista)) != 1) {
            list_move(listb, lista);
            write(1, "pb", 2);
        }
        else {
            list_move(lista, listb);
            write(1, "pa", 2);
        }
        if (!(is_sort((*lista)) == 1 && (*listb) == NULL))
            write(1, " ", 1);
    }
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    list_t *lista = NULL;
    list_t *listb = NULL;
    if (ac < 2)
        return 84;
    if (ac == 2) {
        write(1, "\n", 1);
        return 0;
    }
    else if (ac > 2) {
        for (int i = 1; i < ac; i++)
            list_stack(&lista, my_getnbr(av[i]));
    }
    sort_this(&lista, &listb);
    list_destroy(lista);
    list_destroy(listb);
}