// Write a program to calculate the factorial of a number.

#include <stdio.h>
int main() {
    

int a,i;
int f=1;

printf("Enter number till which you want factorial: ");
scanf("%d", &a);

for(i=1;i<=a;i++)
{
f = f*i;    
}
printf("%d",f);    
    
    
    return 0;
}
