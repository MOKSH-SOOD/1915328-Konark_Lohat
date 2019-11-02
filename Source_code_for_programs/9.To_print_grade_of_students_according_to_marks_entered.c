#include<stdio.h>
int main()
{
    int marks;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nSchema for marks and grades\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nMarks\tGrade\n0-30\tF\n31-50\tD\n51-70\tC\n71-80\tB\n81-90\tA2\n91-100\tA1\n");
    printf("Enter is the marks (Out of 100): ");
    scanf("%d", &marks);
    if (marks>=0)
    {
        if (marks <= 90)
            {
                if (marks <= 80)
                {
                    if (marks <= 70)
                    {
                        if (marks <= 50)
                        {
                            if (marks <= 30)
                            printf("Grade is F");
                            else
                            printf("Grade is D");
                        }
                        else
                        printf("Grade is C");
                    }
                    else
                    printf("Grade is B");
                }
                else
                printf("Grade is A2");
            }
        else
        printf("Grade is A1");
    }
    else 
    printf("Invalid Input");
    return 0;
}