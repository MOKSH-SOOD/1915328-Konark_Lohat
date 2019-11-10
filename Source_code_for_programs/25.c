#include<stdio.h>
#include<string.h>
int main()
{
    int s1[10],s2[10],s3[40],i,j;
    printf("Enter the string 1 (MAX. is 10 Elements): ");
    scanf("%s", s1);
    printf("Enter the string 2 (MAX. is 10 Elements): ");
    scanf("%s", s2);
    if(strcmp(s1,s2)==0)
    printf("Entered strings are same\n");
    else 
    printf("Entered strings are not same\n");
    printf("Length of string 1 and string 2 is %d and %d respectively\n", strlen(s1),strlen(s2));
    printf("Concatenated string is %s\n", strcat(s1,s2));
    printf("New Copied string from string 2 by strcpy() is %s\n", strcpy(s3,s2));
    printf("Reverse of string 2 is %s",strrev(s2));
    return 0;
}