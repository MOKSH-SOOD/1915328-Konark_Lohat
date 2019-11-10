#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,shit=0;
    char str[9]; 
    printf("Enter the string you want to check");
    scanf("%s", str);
    for (a=0; a<strlen(str); a++)
    {
        if (str[a] != str[strlen(str) - (a+1)])
        {
            shit=1;
        } 
    }
    if (shit == 1)
    printf("It is not a palindrome.");
    else 
    printf("It is a palindrome");
    return 0;
}