#include <stdio.h>

void main()
{
    FILE *fp;
    char ch;
    fp = fopen("f1.txt", "r");
    if (fp == NULL)
    {
        printf("File is not Exist");
    }
    // getting the character from file
    ch = fgetc(fp);
    while (!feof(fp)) // feof check the end of file
    { 
        printf("%c", ch);
        ch = fgetc(fp);
    }
    fclose(fp); // to close file
}