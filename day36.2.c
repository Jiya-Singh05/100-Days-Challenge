// Read and print a matrix.

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

int sum=0;

for(i=0; i<row ;i++)
{
    for(j=0 ;j<col ;j++)
    {
        sum=sum+a[i][j];
    }
}

printf("SUM OF EACH ELEMENT OF MATRIX: %d", sum);

    return 0;
}
