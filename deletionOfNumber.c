#include <stdio.h>

int deletion();

int main()
{
    int arr[40], a, n, i;
    printf(" Enter the size of array- ");
    scanf("%d", &n);

    printf(" Enter the array elements:- ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("enter the number to be deleted:- ");
    scanf("%d", &a);

    deletion(arr, n, a);
    
    printf("array is:- ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int deletion(int arr[], int n, int a)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
            break;
        if (i == n)
            return n;
        for (int j = i; j < n+1; j++)
            arr[i] = arr[j + 1];
        return (n - 1);
    }
}