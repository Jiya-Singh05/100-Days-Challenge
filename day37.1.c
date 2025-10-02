// Find the sum of each row of a matrix and store it in an array.

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

int sum[row];

for(i=0; i<row ;i++)
{
sum[i]=0;
    for(j=0 ;j<col ;j++)
    {
        sum[i]=sum[i]+a[i][j];
    }
}

printf("SUM OF EACH ROW OF A MATRIX:\n");

for(int i=0; i<row; i++)
{
        printf("%d \n", sum[i]);
}


    return 0;
}
