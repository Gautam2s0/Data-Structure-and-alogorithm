#include <stdio.h>
float avg(int[], int);
void main()
{
    int marks[] = {1,2, 3,4,5,6,13 };
    float a;
    a = avg(marks, 7);
    printf("Avg=%f", a);
}

float avg(int marks[],int a){
    int i, sum=0;
    float r;
    for(i=0;i<a;i++){
        sum+=marks[i];
    }
    r=sum/a;
    return r;

}
