// Average of array element and sum of array element

#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int main ()
{
    int *arr;
    int sum = 0, i, size;
    float avg;
    printf ("\n enter array size:");
    scanf ("%d", &size);
    arr = (int *) malloc (sizeof (int) * size);
    printf ("\n Default Values : ");
    for (i = 0; i < size; i++)
        printf ("%d\t", arr[i]);
    printf ("\n enter %d values : ", size);
    for (i = 0; i < size; i++)
    {
        scanf ("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / size;
    printf ("\n sum of List : %d", sum);
    printf ("\n Avg of List : %.2f", avg);
    free (arr);
    arr = NULL;
    return 0;
}