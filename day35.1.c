// Find the second largest element in an array.

#include <stdio.h>
int main(){
    
    int a,x,i,j;
    
printf("Enter a number: ");
scanf("%d", &a);

int array[a];

for(i=0;i<a;i++)
{
    printf("Enter a value array[%d]: ",i);
    scanf("%d", &array[i]);
}

for(i=0;i<a-1;i++)
{
    for(j=0 ; j<a-1-i ; j++)
    {
        if( array[j] > array[j+1] )
        {
        x=array[j];
        array[j]=array[j+1];
        array[j+1]=x;
        }  
    }
}

printf("The second largest number is:%d" , array[a-2] )  ;  
    


    return 0;
}
