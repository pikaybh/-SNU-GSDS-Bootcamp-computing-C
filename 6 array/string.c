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
 */
#include <stdio.h>

int main(void) {
    char word[10] = "Winter";
    char word1[6] = "Spring";

    printf("%s\n", word);
    printf("%s\n", word1);
    for (int i = 0; i < 10; i ++)
        printf("%c\n", word[i]);
}