#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a = ");
    scanf("%d", &a);
    printf("Enter the value of b = ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("~~~~~~~~~~~~~~~~\nAfter Swap\n~~~~~~~~~~~~~~~~\n");
    printf("Value of a = %d\nValue of b = %d", a,b);
    return 0;
}