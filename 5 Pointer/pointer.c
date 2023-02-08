#include <stdio.h>

/*
// swapping code
void newSwap(int *firstVal, int *secondVal);

int main(void) {
    int valA = 7;
    int valB = 5;

    printf("Before Swap: valA = %d, valB = %d\n", valA, valB);
    newSwap(&valA, &valB);
    printf("After Swap: valA = %d, valB = %d\n", valA, valB);

    return 0;
}

void newSwap(int *firstVal, int *secondVal) {
    int tempVal;
    tempVal = *firstVal;
    *firstVal = *secondVal;
    *secondVal = tempVal;

    printf("In Swap: firstVal = %d, secondVal = %d\n", *firstVal, *secondVal);
}
*/

// ptr ex.
void reverse_dig(int *n);
void swap(int *a, int *b);

int main(void) {
    int a = 1234;
    int b = 67890;

    printf("Before doing anything: a = %d, b = %d\n", a, b);

    reverse_dig(&a);
    reverse_dig(&b);
    
    printf("After finishing reverse_dig: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After finishing everything: a = %d, b = %d\n", a, b);

    return 0;
}

void reverse_dig(int *n) {
    int tmp = *n, r, ans = 0;

    while(tmp) {
        r = tmp % 10;
        ans = (ans * 10) + r;
        tmp /= 10;
    }

    *n = ans;
}

void swap(int *a, int *b) {
    int tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;
}