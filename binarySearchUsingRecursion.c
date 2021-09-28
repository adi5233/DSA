#include <stdio.h>

int bSearchByRecursion();

int main()
{
    int arr[40], n, i, x;
    printf(" Enter the size of array:  ");
    scanf("%d", &n);

    printf(" Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf(" Enter the number to be searched: ");
    scanf("%d", &x);
    int low = 0, high = n - 1;
    printf(" The number is present at the index %d. ", bSearchByRecursion(arr, x, low, high));
}

int bSearchByRecursion(int arr[], int x, int low, int high)
{

    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
       return bSearchByRecursion(arr, x, low, mid - 1);
    else
       return bSearchByRecursion(arr, x, mid + 1, high);
    return -1;
}
