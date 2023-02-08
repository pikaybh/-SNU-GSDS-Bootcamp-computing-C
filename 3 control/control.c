#include <stdio.h>
#include <stdbool.h>    // Examples

int main(void) {
    /* if statement
    int month;
    printf("Enter the number of the month: ");
    scanf("%d", &month);

    if (month == 4 || month == 6 || month == 9|| month == 11)
        printf("The month has 30 days\n");
    else if (month == 1 || month == 3 || month == 5 || 
            month == 7 || month == 8 || month == 10 || month == 12)
        printf("The month has 31days\n");
    else
        printf("Don't know that month\n");
    */

    /* while statement
    int x = 0;

    while (x < 10) {
        printf("%d\n", x);
        x++;
    }

    do {
        printf("%d\n", x);
        x--;
    } while (x >= 0);
    */

    /*
    /* for statement /
    // int x;

    for (int x = 0; x < 10; x++) {
        printf("%d\n", x);
    }

    // Nested Loops
    for (int multiplicand = 0; multiplicand < 10; multiplicand ++) {
        for (int multiplier = 0; multiplier < 10; multiplier ++) {
            printf("%d\t", multiplier * multiplicand);
        }
        printf("\n");
    }
    */

    /*
    // Example 1.
    bool prime = true;

    // Start at 2 and go until 10
    for (int num = 2; num <= 100; num ++){
        prime = true;

        // Test if the candidate number is aprime
        // for (int divisor = 2; divisor <= 10; divisor ++)
        for (int divisor = 2; divisor <= num; divisor ++)
            if (((num % divisor) == 0) && num != divisor)
                prime = false;

        if (prime)
            printf("The number %d is prime\n", num);
    }
    */

    /*
    // Example 2.
    int n = 54;

    for (int i = 2; i <= n; i ++) {
        int cnt = 0;
        while (n % i == 0) {
            cnt ++;
            n /= i;
        }

        if (cnt) printf("(%d, %d) ", i, cnt);
    }
    */

    // Example 3.
    int operand1, operand2;
    int result = 0;
    char operation;

    printf("Enter first operand: ");
    scanf("%d", &operand1);
    printf("Enter operation to perform (+, -, *, /): ");
    scanf("\n%c", &operation);
    printf("Enter second operand: ");
    scanf("%d", &operand2);

    switch (operation)
    {
        case '+':
            result = operand1 + operand2;
            break;

        case '-':
            result = operand1 - operand2;        
            break;

        case '*':
            result = operand1 * operand2;        
            break;

        case '/':
            if (operand2) result = operand1 / operand2;        
            else printf("Invalid operation!\n");
            break;
        
        default:
            printf("Invalid operation!\n");
            return 0;
    }

    printf("The answer is %d\n", result);

    return 0;
}