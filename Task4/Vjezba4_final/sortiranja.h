#ifndef SORT_H
#define SORT_H
#include <stdbool.h>

bool choose_pivot;
int n_min;
int* generate(int n);

void print(int *niz, int n);

void selectionsort(int *niz, int n);

void insertionsort(int *niz, int n);

int partition(int *niz, int n);

void quicksort(int *niz, int n);

void merge(int *niz, int *niza, int na, int *nizb, int nb);

int* duplicate(int *niz, int n);

void mergesort(int *niz, int n);

double measure(void(*sort)(int *niz, int n), int *niz, int n);

#endif // SORT_H
