/ Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main() {
    

int a,i;
int s=1;

printf("Enter number till which u want product: ");
scanf("%d", &a);

for(i=1;i<=a;i++)
{
if (i%2==0)
s = s*i;    
}
printf("%d",s);    
    
    
    return 0;
}
