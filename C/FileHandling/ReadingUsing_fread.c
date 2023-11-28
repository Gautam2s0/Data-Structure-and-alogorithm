#include <stdio.h>
struct ReadingUsing_fread
{
   int BookId;
   char title[100];
   float price;
}b;

void main(){
    FILE *fp;
    int i=1;
    fp=fopen("f2.dat","rb");
    if(fp==NULL){
        printf("File Not Found");
        exit(1);
    }
    // fread(&b,sizeof(b),1,fp); // fread return the value 0,or 1 if data is found then 1 otherwise 0
    //if we have multiple records in file then we need to run a loop
    // fread(&b,sizeof(b),1,fp);
    // printf("ID = %d\nTitle = %s\nPrice = %f",b.BookId,b.title,b.price);
    while(fread(&b,sizeof(b),1,fp)>0){
        printf("%d Record  \nID = %d\nTitle = %s\nPrice = %f\n",i++,b.BookId,b.title,b.price);

    } 
    fclose(fp);

}