 
// calloc() requires two argument of type (count, size_type). 
// the count will provide a number of elements, size_type is datatype size. 
// when we are working will calloc() function, it creates the memory in block format and the initial value is zero.



#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int *ptr;
    int n, i;
    printf ("Enter number of elements: \n");
    scanf("%d",&n);
    ptr = (int *) calloc (n, sizeof (int));

    if (ptr == NULL)
    {
        printf ("Memory not allocated.\n");
        exit (0);
    }
    else
    {
        printf ("Memory successfully allocated using calloc.\n");
        for (i = 0; i < n; ++i)
        {
            ptr[i] = i + 1;
        }

        printf ("The elements of the array are: ");
        for (i = 0; i < n; ++i)
        {
            printf ("%d, ", ptr[i]);
        }
    }
    return 0;
}

