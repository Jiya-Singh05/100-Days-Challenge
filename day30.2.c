// Count positive, negative, and zero elements in an array.

#include <stdio.h>
int main() {
    
int a,b,i;
int pos=0;
int neg=0;
int zero=0;

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
   if(array[i]>0) 
   {
       pos=pos+1;
   }
   else if(array[i]<0)
   {
       neg=neg+1;
   }
   else if(array[i]==0)
   {
       zero=zero+1;
   }
}
    
printf("Total positive are: %d\n", pos);  
printf("Total negative are: %d\n", neg);  
printf("Total zero are: %d", zero);  
    
    

    
    return 0;
}
