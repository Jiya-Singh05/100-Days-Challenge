// Search for an element in an array using linear search.

#include <stdio.h>
int main() {
    
int a,b,c,i;
int number=0;

printf("Enter a number: ");
scanf("%d", &b);
int array[b];

for(i=0;i<b;i++)
{
    printf("Enter a value array[%d]: ",i);
    scanf("%d", &array[i]);
}

printf("Enter number you want to find: "); 
scanf("%d", &c);

for(i=0;i<b;i++) 
{
   if(array[i]==c)
   {
       number=number+1;
   }
}

    printf("The number you want to find was: %d", number);
    printf(" times");


    
    return 0;
}
