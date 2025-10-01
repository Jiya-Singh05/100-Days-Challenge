// Reverse an array without taking extra space.

#include <stdio.h>
int main() {
    
int a,i,x;

printf("Enter a number: ");
scanf("%d", &a);
int array[a];

for(i=0;i<a;i++)
{
    printf("Enter a value array[%d]: ",i);
    scanf("%d", &array[i]);
}

for(i=0 ; i<a/2 ; i++)
{
    x=array[i];
    array[i]=array[a-1-i];
    array[a-1-i]=x;
}

printf("REVERSED ARRAY: ");
for(i=0; i<a; i++)
{
    printf("%d ", array[i]);
}

   
    return 0;
}
