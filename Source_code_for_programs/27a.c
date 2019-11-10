#include<stdio.h>
long long int factorial(long long int x);
int main()
{
    long int number;
    printf("Enter the number of which you want to know the factorial: ");
    scanf("%d", &number);
    printf("Factorial of the Entered Number is %d", factorial(number));
    return 0;
}
long long int factorial(long long int x)
{
    if (x>=1)
    return x*factorial(x-1);
    else 
    return 1;
}