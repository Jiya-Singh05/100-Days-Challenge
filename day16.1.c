//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main() 
{
int r=0;
int a,n,rem;
int rev=0;
printf("Enter a number: ");
scanf("%d", &n);

while(n!=0)
{
    a=n%2;
    r=r*10+a;
    n=n/2;
}

while(r!=0)
{
    rem=r%10;
    rev=rev*10+rem;
    r=r/10;
}
printf("Binary of the entered number is : %d",rev);


    return 0;
