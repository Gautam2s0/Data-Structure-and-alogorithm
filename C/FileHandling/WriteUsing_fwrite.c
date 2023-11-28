#include <stdio.h>
// Fwrite is used to write in file in binary  mode;
struct  bootk
{
   int bookId;
   char title[100];
   float price;

}b1;


void main(){
    FILE *fp;
    fp=fopen("f2.dat","ab");
    printf("Enter the Book Id, Title and Price ");
    scanf("%d",&b1.bookId);
    fflush(stdin);
    gets(b1.title);
    
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);

}