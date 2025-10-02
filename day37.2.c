// Find the transpose of a matrix.

#include <stdio.h>
int main(){
    
int row,col,i,j;

printf("Enter number of rows: ");
scanf("%d" , &row);
printf("Enter number of columns: ");
scanf("%d" , &col);

int a[row][col];

printf("Enter elements of matrix: ");

for(i=0; i<row ;i++)
{
    for(j=0 ;j<col ;j++)
    {
      
        scanf("%d", &a[i][j] );
    }
}

printf("Matrix:\n\n ");

for(i=0; i<row ;i++)
{
    for(j=0 ;j<col ;j++)
    {
        printf(" %d " , a[i][j]);
    }
    printf("\n");
}

int trans[col][row];

for(i=0; i<row ;i++)
{
    for(j=0 ;j<col ;j++)
    {
        trans[j][i]= a[i][j];
    }
}

 printf("The transpose of the matrix is:\n");
 
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }


    return 0;
}
