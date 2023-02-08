#include <stdio.h>
#define SIZE 10

void selection_sort(int arr[], int size);

int main(void) {
    int arr[SIZE] = {9, -8, -1, 6, 23, 4, 3, 11, 85, 0};

    for (int i = 0; i < SIZE; i ++) {  // Print input
        printf("%d", arr[i]);
        if (i < SIZE - 1)
            printf(", ");
    }

    printf("\n");

    selection_sort(arr, SIZE);  // Sort

    for (int i = 0; i < SIZE; i++) {  // Print output
        printf("%d", arr[i]);
        if (i < SIZE - 1)
            printf(", ");
    }

    printf("\n");

    return 0;
}

void selection_sort(int arr[], int size) {
    int smallest, temp;

    for (int i = 0; i < size; i ++) {
        /**
         * @brief Find the smallest item
         * 
         */
        smallest = i;

        for (int j = i + 1; j < size; j ++)
            if (arr[j] < arr[smallest])
                smallest = j;

        // Swap
        temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
}