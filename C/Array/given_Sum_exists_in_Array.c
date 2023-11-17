// Given an array A[] of n numbers and another number x,
// the task is to check whether or not there exist two elements in A[] whose sum is exactly x.

// Input: arr[] = {0, -1, 2, -3, 1}, x= -2
// Output: Yes
// Explanation:  If we calculate the sum of the output,1 + (-3) = -2

#include <stdio.h>
int main()
{
    int arr[] = {0, -1, 2, -3, 1}, x = -2, i = 0, j = 0, l, sum = 0,flag=0;
    l = sizeof(arr) / sizeof(arr[0]);
    //****************************************************
    // brute force technique
    // for (i = 0; i < l - 1; i++)
    // {
    //     for (j = i + 1; j < l; j++)
    //     {
    //         sum = arr[i] + arr[j];
    //         if (sum == x)
    //         {
    //             printf("YES");
    //             return;
    //         }
    //     }
    //     printf("\n");
    // }
    // **********************************************************
    // two pointer technique
    j = l - 1;
    while (l<j)
    {
        sum=arr[i]+arr[j];
        if(sum==x){
            flag=1;
            break;
        }
        else if(sum>x){
            j--;
        }
        else{
            i++;
        }
    }
    
    if(flag==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
