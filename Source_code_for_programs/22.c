#include<stdio.h>
int main() 
{ 
    int A[4][4] = { {1, 1, 1, 1},{2, 2, 2, 2},{3, 3, 3, 3}, {4, 4, 4, 4}}; 
  
    int B[4][4] = { {1, 1, 1, 1}, {2, 2, 2, 2},{3, 3, 3, 3},{4, 4, 4, 4}}; 
  
    int C[4][4];
    int i, j; 
    int k, l; 
    for (k = 0; k < 4; k++)
    {
      for (l = 0; l < 4; l++) 
      {
          C[k][l] = A[k][l] + B[k][l];   
      }        
    } 
    printf("Result matrix is \n"); 
    for (i = 0; i < 4; i++) 
    { 
        for (j = 0; j < 4; j++)
        {
            printf("%d ", C[i][j]);
        }    
        printf("\n"); 
    } 
  
    return 0; 
}