#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a ");
    scanf("%d", &a);
    printf("Enter the value of b ");
    scanf("%d", &b);
    printf("Enter the value of c ");
    scanf("%d", &c);
    if (a>b)
    {
        if(a > c)
        printf("a is the greatest");
        else
        printf("c is the greatest");
    }
    else
    {
        if (b > c)
        printf("b is the greatest");
        else
        printf("c is the greatest");
        
    }
    return 0;
    
}