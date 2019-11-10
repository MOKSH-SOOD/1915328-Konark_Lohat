#include<stdio.h>
int main()
{
    int i,j,n, f[100000]={0,1};
    printf("Enter the Number upto which you want to print the fibonacci seires");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        f[i+2] = f[i+1] + f[i];
        printf("%d\n", f[i]);
    } 
}