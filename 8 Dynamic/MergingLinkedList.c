#include <stdio.h>
#include <stdlib.h>
/*
typedef struct Node {
    int val;
    Node* next;
} Node;

Node* merge(Node* list1, Node* list2);

int main(void) {
    printf("%d", sizeof(float));

    return 0;
}

Node* merge(Node* list1, Node* list2) {
    Node dummy = {0, NULL};
    Node* newList = &dummy;

    while (list1 && list2) {
        if (list1 -> val < list2 -> val) {
            newList -> next = list1;
            list1 = list1 -> next;
        } else {
            newList -> next = list2;
            list2 = list2 -> next;
        }
        newList = newList -> next;
    }

    if (list1) 
        newList -> next = list1;
    else if (list2)
        newList -> next = list2;

    return dummy.next;

}
*/
int main(void) {
    printf("%d\n", sizeof(char));

    return 0;
}