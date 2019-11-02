#include<stdio.h>
int main()
{
    int num, k=0, x;
    for (num=1; num<=100; num++)
    {
        for (x=1; x<=num; x++)
        {
            if (num%x == 0)
            {
                k++;
            }
        }
    }
    if (k == 2)
    printf("%d\n", num);
    else 
    {
        if (k == 1)
        printf("Number is neither a prime nor a composite");
        else
        printf("Number is not a prime number");
    }    
}
