#include<stdio.h>
int main()
{
    int num,x;
    printf("Enter the number of mutiples of 5 you want: ");
    scanf("%d", &num);
    for (x=1; x<=num; x++)
    {
        printf("5\t*\t%d\t=\t%d\n", x,x*5);
    }
    return 0;
}