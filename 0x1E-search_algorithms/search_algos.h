#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stddef.h>
#include <stdio.h>

int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t size);
int _advanced_binary(int *array, size_t left, size_t right, int value);
int advanced_binary(int *array, size_t size, int value);
size_t min(size_t a, size_t b);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif
