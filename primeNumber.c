#include <stdio.h>
#include <math.h>

int prime(int num);
int main()
{
    int x;
    printf("Enter a number:- ");
    scanf("%d", &x);
    if (prime(x) == 1)
        printf("prime number");
    else
        printf("Not a prime number");

}

int prime(int num)
{
    int i, flag = 1;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return (flag);
}