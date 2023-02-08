/**
 * @file File IO-ex.c
 * @author pikaybh (pikaybh@snu.ac.kr)
 * @brief answer:
 * Total characters = 90
 * Total words = 18
 * @version 0.1
 * @date 2023-02-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main(void) 
{
    FILE *infile;
    int charNum = 0, wordNum = 0;
    char ch;

    infile = fopen("src/Finput.txt", "r");  // Thy self thy foe, to thy sweet self too cruel Thou that art now the world's fresh ornament
    if (infile == NULL) {
        printf("fopen error!\n");
        return 0;
    }

    while ((ch = fgetc(infile)) != EOF) {
        charNum ++;

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            wordNum ++;
    }

    if (charNum)
        wordNum ++;

    printf("Total characters = %d\n", charNum);
    printf("Total words = %d\n", wordNum);

    fclose(infile);

    return 0;
}