#include<stdio.h>
void swap(int *x, int *y);
int main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Values before swapping are a=%d and b=%d\n", a,b);
    swap(&a,&b);
    printf("Values after swapping are a=%d and b=%d\n", a,b);
    return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}