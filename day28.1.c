//Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main() {
    
int a,i,j; 
int b=1;

printf("Enter a number: ");
scanf("%d", &a);

for(j=2;j<=a;j++)
{
    b=1;
for(i=2;i<=j/2;i++)
{
    if(j%i==0)
    {
        b=0;
        break;
    }
}
if(b==1)
    {
    printf("%d", j);
    printf(" ");
    }
}


    return 0;
}
