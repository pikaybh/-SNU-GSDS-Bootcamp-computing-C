/**
 * @file array.c
 * @author pikaybh (pikaybh@snu.ac.kr)
 * @brief An array is a collction of **similar dat items** that are stored **sequentially in memory** \
 *      and accessible through a **single name** or identifier.
 * @version 0.1
 * @date 2023-02-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/*
// array
#include <stdio.h>
#define NUM_STUDENTS 5

int main(void) {
    int midterm[NUM_STUDENTS];
    int final[NUM_STUDENTS];
    int total[NUM_STUDENTS];

    // Input exam scores
    for (int i = 0; i < NUM_STUDENTS; i ++) {
        printf("Input midterm score for student %d: ", i);
        scanf("%d", &midterm[i]);
        printf("Input final score for student %d: ", i);
        scanf("%d", &final[i]);
    }

    // Calculate total scores
    for (int i = 0; i < NUM_STUDENTS; i ++)
        total[i] = midterm[i] + final[i];

    // Output the total scores
    for (int i = 0; i < NUM_STUDENTS; i ++)
        printf("Total score for Student %d is %d\n", i, total[i]);

    return 0;
}
*/

// String
/**
 * xFFF3 'S'
 * xFFF4 'p'
 * xFFF5 'r'
 * xFFF6 'i'
 * xFFF7 'n'
 * xFFF8 'g'
 * xFFF9 'W'
 * xFFFA 'i'
 * xFFFB 'n'
 * xFFFC 't'
 * xFFFD 'e'
 * xFFFE 'r'
 * xFFFF '\0'

 * xFFF2 'S'
 * xFFF3 'p'
 * xFFF4 'r'
 * xFFF5 'i'
 * xFFF6 'n'
 * xFFF7 'g'
 * xFFF8 '\0'
 * xFFF9 'W'
 * xFFFA 'i'
 * xFFFB 'n'
 * xFFFC 't'
 * xFFFD 'e'
 * xFFFE 'r'
 * xFFFF '\0'
 *
#include <stdio.h>

int main(void) {
    char word[10] = "Winter";
    char word1[6] = "Spring";

    printf("%s\n", word);
    printf("%s\n", word1);
    for (int i = 0; i < 10; i ++)
        printf("%c\n", word[i]);
}
*/

/*
// Relationship with Pointer
#include <stdio.h>
#define MAX_NUMS 5

int Average(int inputValues[]);

int main(void) {
    int mean;
    int nums[MAX_NUMS];

    printf("Enter %d nums, \n", MAX_NUMS);
    for (int i = 0; i < MAX_NUMS; i ++) {
        printf("Input num %d: ", i);
        scanf("%d", &nums[i]);
    }

    mean = Average(nums);
    printf("The average of these nums is %d\n", mean);

    return 0;
}

int Average(int inputValues[]) {
    int sum = 0;

    for (int i = 0; i < MAX_NUMS; i++)
        sum += inputValues[i];

    return (sum / MAX_NUMS);
}
*/

// Selection Sort
#include <stdio.h>
#define SIZE 10

void selection_sort(int L[], int size);

int main(void) {
    int L[SIZE] = {9, -8, -1, 6, 23, 4, 3, 11, 85, 0};

    for (int i = 0; i < SIZE; i ++) {  // Print input
        printf("%d", L[i]);
        if (i < SIZE - 1)
            printf(", ");
    }

    printf("\n");

    selection_sort(L, SIZE);  // Sort

    for (int i = 0; i < SIZE; i++) {  // Print output
        printf("%d", L[i]);
        if (i < SIZE - 1)
            printf(", ");
    }

    printf("\n");

    return 0;
}

void selection_sort(int L[], int size) {
    int smallest, temp;

    for (int i = 0; i < size; i ++) {
        /**
         * @brief Find the smallest item
         * 
         */
        smallest = i;

        for (int j = i + 1; j < size; j ++)
            if (L[j] < L[smallest])
                smallest = j;

        // Swap
        temp = L[i];
        L[i] = L[smallest];
        L[smallest] = temp;
    }
}