#include<stdio.h>
int main()
{
    int number,factorial=1,x;
    printf("Enter the number: ");
    scanf("%d", &number);
    for (x=1; x<=number; x++)
    {
        factorial = factorial*x;
    }
    printf("Factorial of %d is %d", number, factorial);
    return 0;
}