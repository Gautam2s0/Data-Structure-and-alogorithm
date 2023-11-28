#include <stdio.h>
int largestNum(int arr[], int len, int index)
{
    static int max = 0;

    if (index == len)
        return max;

    else if (arr[index] > max)
    {
        max = arr[index++];
    }
    else
    {
        index++;
    }
    largestNum(arr, len, index);
}
void main()
{
    int arr[30] = {1, 5, 8, 0, 3,60, 9, 5, 7, 34};
    int len = sizeof(arr) / sizeof(arr[0]);
    int result = largestNum(arr, len, 0);
    printf("Largest Num = %d", result);
}