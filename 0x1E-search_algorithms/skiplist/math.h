#ifndef MATH_SEARCH_H
#define MATH_SEARCH_H

#include <stdio.h>
#include <math.h>

int jump_search(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
void init_express(skiplist_t *list, size_t size);
skiplist_t *create_skiplist(int *array, size_t size);

#endif /* MATH_SEARCH_H */
