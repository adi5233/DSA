#include <stdio.h>

int checkForSorted();

int main()
{
    int arr[40], n, i;
    printf(" Enter the size of array- ");
    scanf("%d", &n);

    printf(" Enter the array elements:- ");
    for (i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n");

    int k= checkForSorted(arr, n);


    if (k == 0)
    {
        printf(" no");
    }
    else
        printf("yes");
}

int checkForSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[i - 1])
            return 0;
    }
    return 1;
}
