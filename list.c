#include <stdio.h>
#include <stdlib.h>

#include "list.h"

node_t *list_make_node_t(node_t *next, int value)
{
    node_t *nn = malloc(sizeof(node_t));
    nn->next = next;
    nn->value = value;
    return nn;
}

void list_free(node_t **list)
{
    if (!list)
        return;
    while (*list) {
        node_t *n = *list;
        (*list) = (*list)->next;
        free(n);
    }
}
