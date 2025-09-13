//Write a program to check if a number is prime.

#include <stdio.h>
int main () {
    
int b=1;
int a,i;

printf("Enter a number: ");
scanf("%d", &a);

for(i=2;i<a;i++)
{ 
    if(a%i==0)
    {
        b=0;
        break;
    }
}
    if(b==1)
    printf("Prime");
    else
    printf("Not Prime");

    
    
    return 0;
}
