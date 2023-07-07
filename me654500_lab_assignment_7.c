#include<stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j, temp, swap;
    for (i=0;i<n-1;i++)
    {
        swap=0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
                swap++;
            }
        }
        printf("Index %d: %d swaps\n", i, swap);
    }
}

int main()
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);

    return 0;
}

