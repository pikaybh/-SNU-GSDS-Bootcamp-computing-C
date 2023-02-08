#include <stdio.h>

/*
char commas (int n) {
    char result[65], s_remainer[3];
    int s_quotient[50];
    int d_quotient = n / 1000;
    int d_remainer = n % 1000;
    int i, j = 0;

    sprintf(s_quotient, "%d", d_quotient);
    sprintf(s_remainer, "%d", d_remainer);

    for (i; i < d_quotient / 10; i ++) result[i] = s_quotient[i];
    result[i++] = ',';
    int tre = 1;
    for (i; i < ((n / 10) + d_quotient); i ++) {
        if (~(tre/3)) result[i++] = ',';
        result[i] = 0;
    }

    return '.';
}
*/

/*Grammar
int Factorial(int n);

int main(void) {
    int number;
    int answer;

    printf("Input a number: ");
    scanf("%d", &number);

    answer = Factorial(number);

    printf("The Factorial of %d is %d\n", number, answer);
}

int Factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i ++) {
        result *= i;
    }

    return result;
}
*/

// Recursion
int gcd(int a, int b);
int factorial (int n);
int fibonacci(int n);

int main(void) {
    int a, b, c;

    a = gcd(3768, 1701);
    b = factorial(5);
    c = fibonacci(10);

    printf("gcd: %d, factorial: %d, fibonacci: %d\n", a, b, c);

    return 0;
}

int gcd(int a, int b) {
    // Base case
    if (a % b == 0)
        return b;

    // Recursive cas
    return gcd(b, a % b);
}

int factorial (int n) {
    // Base case
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}

int fibonacci(int n) {
    // Base case
    if (n == 1 || n == 2)
        return n;

    //Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2); 
}