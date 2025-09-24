//Read and print elements of a one-dimensional array.

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
    printf("element : %d\n" ,array[i]);
}

    return 0;
}
