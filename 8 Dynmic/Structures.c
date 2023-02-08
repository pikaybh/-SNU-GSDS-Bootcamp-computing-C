#include <stdio.h>

#define STUDENT_NUMS 5

typedef struct studenType {
    char name[50];
    int ID;
    int midterm;
    int final;
    int total;

} Student;

void calculateTotal(Student *s);

int main(void) {
    // Declare an array of structures
    Student s[STUDENT_NUMS];

    // Receive input from the keyboard for each student
    for (int i = 0; i < STUDENT_NUMS; i++) {
        printf("[Input for Student #%d]\n", i);
        printf("\tname: ");
        scanf("%s", s[i].name);  // **Not** `&s[i].name`, since string(`name`) is already an array!
        printf("\tID: ");
        scanf("%d", &s[i].ID);
        printf("\tmidterm: ");
        scanf("%d", &s[i].midterm);
        printf("\tfinal: ");
        scanf("%d", &s[i].final);
    }

    // Calculate total score (sum) of each student
    for (int i = 0; i < STUDENT_NUMS; i++)
        calculateTotal(&s[i]);

    // Print each student's total score
    for (int i = 0; i < STUDENT_NUMS; i++) 
        printf("Total score for student #%d(%s) is %d\n", 
        i, s[i].name, s[i].total);

    return 0;
} 

// Define caculateTotal()
void calculateTotal(Student *s) {
    // (*s).total = (*s).midterm + (*s).final;
    s -> total = s -> midterm + s -> final;
}