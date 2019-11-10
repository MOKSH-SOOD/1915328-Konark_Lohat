#include<stdio.h>
int average();
int main()
{
    int a,b,c,d,e;
    printf("Enter the 5 values of whom you want to calculate average");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    printf("Average is %d", average(a,b,c,d,e));
    return 0;
}
int average(int a, int b, int c, int d, int e)
{
    return ((a+b+c+d+e)/5);
}