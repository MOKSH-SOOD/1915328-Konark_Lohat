#include<stdio.h>
int main()
{
    int number, first, middle, last, search, i, arr[9999];
    printf("Enter the value of numbers you want to enter: ");
    scanf("%d", &number);
    printf("Enter those %d values: \n", number);
    for (i=0; i<number; i++)
    {
        scanf("\n%d", &arr[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d", &search);
    first = 0;
    last = number - 1;
    middle = (first+last)/2;
    while(first<=last)
    {
        if(arr[middle]<search)
            first = middle + 1;
        else if (arr[middle] == search)
        {
            printf("%d is found and present at %d", search, middle+1);
            break;
        } 
        else
        last = middle - 1;
        
        middle = (first+last)/2;
    }
    if (first>last)
    printf("%d is not present in the above list", search);
    return 0;
}