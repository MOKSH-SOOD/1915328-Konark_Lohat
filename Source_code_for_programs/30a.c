#include<stdio.h>
int main()
{
    int a[99999],i,j,s,k;
    printf("Enter the numbers you want to enter: ");
    scanf("%d", &i);
    for (j=0; j<i; j++)
    {
        scanf("%d", &a[j]);
    }
    printf("Enter the number you want to search");
    scanf("%d", &s);
    for (k=0; k<i; k++)
    {
        if (s == a[k])
        {
            printf("%d is present in this array at %d location of array", s,k+1);
            break;
        }
    }
    if (k == i)
    printf("%d is not present in this array", s);
    return 0;
}