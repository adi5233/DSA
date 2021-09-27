#include <stdio.h>

int reverse();

int main()
{
    int arr[40], n, i;
    printf(" Enter the size of array- ");
    scanf("%d", &n);

    printf(" Enter the array elements:- ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    reverse(arr, n);
    printf(" Reversed array is:- ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}

int reverse(int arr[], int n)
{
    int low=0, high= n-1;
    while(low<high)
    {
       int temp= arr[low];
       arr[low]= arr[high];
       arr[high]= temp;
       low++;
       high--;
    }
    return 1;
}