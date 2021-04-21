#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int helper(int *array, int l, int r, int value);
void print_now(int *array, long unsigned int left, long unsigned int right);

#endif
