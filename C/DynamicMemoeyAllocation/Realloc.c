// realloc() is required to use when we are reallocating memory. 
// realloc() requires two arguments of type void*, size_type. 
// void* indicates previous block base address, size_type is datatype size. 
// When we are working with realloc() function, it creates the memory in bytes format and the initial value is garbage.



#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int main ()
{
    int *arr;
    int s1, s2, i;
    
    printf ("\nEnter array size1 : ");
    scanf ("%d", &s1);
    arr = (int *) calloc (s1, sizeof (int));
    printf ("\nEnter %d values : ", s1);
    for (i = 0; i < s1; i++)
        scanf ("%d", &arr[i]);
        
    // printf ("\n Enter array size2:");
    printf ("\nEnter reallocating size of array : ");
    scanf ("%d", &s2);
    arr = (int *) realloc (arr, sizeof (int) * (s1 + s2));
    printf ("\nEnter %d values ", s2);
    for (i = s1; i < s1 + s2; i++)
        scanf ("%d", &arr[i]);
        
    printf ("\nArray Data List : ");
    for (i = 0; i < s1 + s2; i++)
        printf ("%d ", arr[i]);
        
    printf ("\n%d\n", arr[i]);
    free (arr);
    arr = NULL;
    return 0;
}