#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 > num2)
    printf("First Number is Greatest i.e %d", num1);
    else
    printf("Second Number is Greatest i.e %d", num2); 
    return 0;
}