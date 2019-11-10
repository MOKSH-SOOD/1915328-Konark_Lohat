#include<stdio.h>
int fib(int j);
int main()
{
    int n,i,j=0;
    printf("Enter the Number of terms you want to print: ");
    scanf("%d", &n);
    printf("Fibonacci Series upto %d terms are: ", n);
    for (i=1; i<=n; i++)
    {
        printf("%d\n", fib(j));
        j++;
    }
    return 0;
}
int fib(int j)
{
    if (j == 1 || j == 0)
    return j;
    else
    return (fib(j-1) + fib(j-2));
}