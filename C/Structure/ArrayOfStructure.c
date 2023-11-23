#include <stdio.h>

struct ArrayOfStructure
{
    int roll_no;
    char name[30];
    float marks;
};

void main(){
    int i;
    struct ArrayOfStructure s[2];
    for(i=0;i<2;i++){
        printf("Enter the %dth structure data : ",i+1);
        scanf("%d%s%f",&s[i].roll_no,&s[i].name,&s[i].marks);
    }

    for(i=0;i<2;i++){
        printf("Data of %dth structure\n",i+1);
        printf("Roll No = %d\nName = %s\nMarks = %f\n",s[i].roll_no,s[i].name,s[i].marks);
    }
    
}
