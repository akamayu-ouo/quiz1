#ifndef LIST_H
#define LIST_H
#include <stdbool.h>
#include <stdlib.h>

typedef struct __node {
    int value;
    struct __node *next;
} node_t;

static inline void list_add_node_t(node_t **list, node_t *node_t) {
    node_t->next = *list;
    *list = node_t;
}

static inline void list_concat(node_t **left, node_t *right) {
    while (*left)
        left = &((*left)->next);
    *left = right;
}

node_t *list_make_node_t(node_t *next, int value);
void list_free(node_t **list);

#endif
