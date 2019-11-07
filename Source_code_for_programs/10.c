#include<stdio.h>
int main()
{
    int a,b,c,root1,root2;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nSchema of a Quadratic Equation is a(x^2) + b(x) + c = 0\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter is value of a ");
    scanf("%d", &a);
    printf("Enter is value of b ");
    scanf("%d", &b);
    printf("Enter is value of c ");
    scanf("%d", &c);
    root1 = ((-b) + sqrt((b*b) - (4*a*c)))/(2*a);
    root2 = ((-b) - sqrt((b*b) - (4*a*c)))/(2*a);
    printf("Roots are %d and %d", root1,root2);
    return 0;
}