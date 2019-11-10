#include<stdio.h>
int main()
{
    int m1[3][3]={{1,1,1},{2,2,2},{3,3,3}}, m1t[3][3], i,j;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            m1t[j][i] = m1[i][j];
        }
    }
    for (j=0; j<3; j++)
    {
        for (i=0; i<3; i++)
        {
            printf("%d", m1[i][j]);
        }
        printf("\n");
    }
    return 0;
}