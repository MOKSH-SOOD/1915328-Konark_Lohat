#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter the value of first integer: ");
    scanf("%d", &a);
    printf("Enter the value of second integer: ");
    scanf("%d", &b);
    sum = a + b;
    printf("Sum is %d", sum);
    return 0;
}