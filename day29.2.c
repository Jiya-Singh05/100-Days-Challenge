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

int max=array[0];
int min=array[0];
for(i=0;i<b;i++)
{
    if(array[i]>max)
    {
        max=array[i];
    }
    if(array[i]<min)
    {
        min=array[i];
    }
}

printf("MAX VALUE IS: %d\n", max);
printf("MIN VALUE IS: %d\n", min);

    return 0;
}
