#include <stdio.h>
#include <string.h>
#define MAX 100

void main()
{
    char str1[MAX], str2[MAX], rev1[MAX], rev2[MAX];
    int i = 0, j = 0, len1, len2;
    printf("Enter the first string : ");
    gets(str1);
    printf("Enter the second string : ");
    gets(str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    while (str1[i] != '\0')
    {
        rev1[i] = str1[len1 - i - 1];
        i++;
    }

    for (i = len2 - 1; i >= 0; i--)
    {
       
        rev1[len1++]=str2[i];
        j++;
        printf("%c\n",str2[i]);
    }
    rev1[len1]='\0';
    printf("s1 =%s\n", rev1);
   // printf("s2= %s\n", rev2);
  //  printf("Result = %s",strcat(rev1,rev2));
}

// for(i=len1-1;i>=0;i--){
//         rev1[j]=str1[i];
//         j++;
//         printf("str1= %c\n",str1[i]);
//     }
//     j=0;
//     for(i=len2-1;i>=0;i--){
//         rev2[j]=str2[i];
//         j++;
//         printf("str1= %c\n",str2[i]);
//     }

//     for(i=0;i<len2;i++){
//         rev1[len1+i]=rev2[i];
//     }
//     // printf("str1= %s,str2=%s",rev1,rev2);
//     printf("result %s",rev1);


// 

// while (str2[j] != '\0')
//     {
//         rev2[j] = str2[len2 - j - 1];
//         j++;
//     }