// Merge two arrays.

#include <stdio.h>
int main() {
    
int a,b,i,j;

printf("Enter a number for 1st array: ");
scanf("%d", &a);
int array[a];

for(i=0;i<a;i++)
{
    printf("Enter a value array[%d]: ",i);
    scanf("%d", &array[i]);
}

printf("Enter a number for 2nd array: ");
scanf("%d", &b);
int arr[b];

for(i=0;i<b;i++)
{
    printf("Enter a value array[%d]: ",i);
    scanf("%d", &arr[i]);
}

int arraym[a+b];
for(i=0;i<a;i++)
{
    arraym[i]=array[i];
}

for(i=0;i<b;i++)
{
    arraym[i+a]=arr[i];
}

printf("MERGED ARRAY:");
for(i=0;i<a+b;i++)
{
    printf("%d " , arraym[i]);
}




    
    return 0;
}
