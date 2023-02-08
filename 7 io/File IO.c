#include <stdio.h>

int main(void) 
{
    FILE *infile;
    FILE *outfile;
    char str[50];

    infile = fopen("C:/Users/wooryang/Desktop/c/io/src/input.txt", "r");
    outfile = fopen("C:/Users/wooryang/Desktop/c/io/src/output.txt", "w");

    if (infile == NULL)
        printf("infile error!\n");

    if (outfile == NULL)
        printf("outfile error!\n");

    if (infile == NULL || outfile == NULL)
        printf("fopen error!\n");

    while (fscanf(infile, "%s", str) != EOF)
        fprintf(outfile, "%s ", str);

    fclose(infile);
    fclose(outfile);

    return 0;
}