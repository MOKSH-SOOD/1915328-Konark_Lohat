#include<stdio.h>
int main()
{
    double num1,num2;
    char operator;
    printf("Select the Operator (+ - * /)");
    scanf("%c", &operator);
    printf("\nEnter the numbers: ");
    scanf("%lf %lf", &num1,&num2);
    switch(operator)
    {
        case '+':
        printf("%.2lf + %.2lf = %.2lf", num1,num2,num1+num2);
        break;
        case '-':
        printf("%.2lf - %.2lf = %.2lf", num1,num2,num1-num2);
        break;
        case '*':
        printf("%.2lf * %.2lf = %.2lf", num1,num2,num1*num2);
        break;
        case '/':
        printf("%.2lf / %.2lf = %.2lf", num1,num2,num1/num2);
        break;
        default:
        printf("Invalid Operator");
    }

    return 0;
}