// Count even and odd numbers in an array.

#include <stdio.h>
int main() {
    
int a,b,i;

printf("Enter a number: ");
scanf("%d", &b);
int array[b];

for(i=0;i<b;i++)
{
    printf("Enter a value array[%d]: ",i);
    scanf("%d", &array[i]);
}
    
for(i=0;i<b;i++)   
{
    if(array[i]%2==0)
    {
        printf("Even number: %d\n", array[i]);
    }
    else
    {
       printf("Odd number: %d\n", array[i]);  
    }
} 
printf("TOTAL ODD NUMBER:%d\n", odd);    
printf("TOTAL EVEN NUMBER:%d", even);    
    
    
    return 0;
}
