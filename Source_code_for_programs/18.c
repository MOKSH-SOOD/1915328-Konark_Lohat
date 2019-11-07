#include<stdio.h>
int main()
{
    int number,remainder,sum=0,original_number;
    printf("Enter the Number: ");
    scanf("%d", &number);
    original_number = number;
    while(number>0)
    {
        remainder = number%10;
        sum = sum+(remainder*remainder*remainder);
        number = number/10;
    }
    if (original_number == sum)
    printf("Number is a Armstrong Number");
    else 
    printf("Number is not a Amrstrong Number");
    return 0;
}