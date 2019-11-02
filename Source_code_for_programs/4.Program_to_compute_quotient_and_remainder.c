#include<stdio.h>
int main()
{
    int divisor, dividend, quotient, remainder;
    printf("Enter the value of divisor: ");
    scanf("%d", &divisor);
    printf("Enter the value of dividend: ");
    scanf("%d", &dividend);
    quotient = dividend/divisor;
    remainder = dividend%divisor; 
    printf("Qoutient is %d\n", quotient);
    printf("Remainder is %d", remainder);
    return 0;
}