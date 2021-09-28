#include <stdio.h>

int firstOcc();

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
    printf(" The number is present at the index %d. ", firstOcc(arr, x, low, high));
}

int firstOcc(int arr[], int x, int low, int high)
{

    if (low > high)
        return -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            if (mid == 0 || arr[mid] != arr[mid - 1])
                return mid;
            else
                high = mid - 1;
        }
    }
}
