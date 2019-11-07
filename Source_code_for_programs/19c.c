#include<stdio.h>
int main()
{
    int p,q,r,s,t;
    for (p=1; p<5; p++)
    {
        for (q=1; q<5-p; q++)
        {
            printf(" ");
        }
        for (r=1; r<=p; r++)
        {
            printf("%d", r);
        }
        for (s=p-1; s>=1; s--)
        {
            printf("%d", s);
        }
        printf("\n");
    }
    return 0;
}