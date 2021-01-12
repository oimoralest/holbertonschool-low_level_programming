#ifndef __SEARCH_ALGOS_H_
#define __SEARCH_ALGOS_H_

/*Libraries*/
#include <stdio.h>

/*Prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void printSubArray(int *array, size_t begin, size_t end);

#endif /*__SEARCH_ALGOS_H_*/
