#include<stdio.h>
int main()
{
    int arr[1000],n,x,y,sum=0;
    printf("Enter the number of elements you want to input(From 1 to 1000): ");
    scanf("%d", &n);
    for (x=0; x<n; x++)
    {
        printf("Enter Element %d: ", x+1);
        scanf("%d", &arr[x]);
    }
    for (y=0; y<n; y++)
    {
        sum += arr[y];
    }
    printf("Sum of above array elements is %d", sum);                    
    return 0;
}