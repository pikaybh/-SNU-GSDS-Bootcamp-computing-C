#include <stdio.h>
#define SIZE 7

void swap(int *a, int *b);
void reverse(int arr[], int size);

int main (void) {
    int arr[SIZE] = {3, 1, 4, 1, 5, 9, 2};

    // Print inputs
    for (int i = 0; i < SIZE; i ++)
        printf("%d ", arr[i]);
    printf("\n");

    // Reverse items
    reverse(arr, SIZE);

    // Print outputs
    for (int i = 0; i < SIZE; i ++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void reverse(int arr[], int size) {
    int *p1 = arr;
    int *p2 = arr + size - 1;
    while (p1 < p2) 
        swap(p1++, p2--);
}