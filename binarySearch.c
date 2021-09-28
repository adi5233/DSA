#include <stdio.h>

int bSearch();

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
    printf(" The number is present at the index %d. ", bSearch(arr, n, x));
}

int bSearch(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
