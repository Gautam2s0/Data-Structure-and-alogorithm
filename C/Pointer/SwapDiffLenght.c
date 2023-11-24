#include <stdio.h>
#include <string.h>
void swap(char*, char*);
 
int main()
{
    char str1[10] ;
    char str2[10] ;
    printf("Enter the first String \n");
    gets(str1);
    printf("Enter the Second String \n");
    gets(str2);
     printf("\nstring 1 values : %s \n", str1);
    printf("\nstring 2 values : %s ", str2);
    printf("\n***************************************************\n");
    swap(str1,str2);
    int i;
    printf("\nstring 1 values : %s \n", str1);
    printf("\nstring 2 values : %s ", str2);

}
 
void swap(char *str1, char *str2)
{
    int i,len1,len2;
    for(i=0 ;str2[i] != '\0';  i++)
    {
        int x = str1[i];
        str1[i] = str2[i];
        str2[i] = x;
    }
    str1[i] = '\0';
}