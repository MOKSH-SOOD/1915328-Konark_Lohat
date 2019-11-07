#include<stdio.h>
int main()
{
    int i, n, arr[5],largest;
    for(i = 0; i < 6; i++)
    {
       printf("Enter Number %d: ", i);
       scanf("%d", &arr[i]);
    }
    for(i = 0; i < 6; i++)
    {
       if(largest < arr[i])
           largest = arr[i];
    }
    printf("Largest element = %d", largest);
    return 0;
}
