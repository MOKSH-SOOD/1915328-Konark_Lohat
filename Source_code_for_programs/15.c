#include<stdio.h>
int main()
{
    int num,original, reverse=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    original = num;
    while(num != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + num%10;
        num = num/10;
    }
    if (original == reverse)
    printf("Number is a palindrome");
    else 
    printf("Number is not a palindorme");
    return 0;
}