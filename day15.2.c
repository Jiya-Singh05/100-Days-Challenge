//Write a program to reverse a given number.

#include <stdio.h>
int main() 
{
int a;
int rev=0;
int rem;

printf("Enter a number which you want to reverse: ");
scanf("%d", &a);

while(a!=0)
{
    rem=a%10;
    rev=rev*10+rem;
    a=a/10;
}
printf("%d",rev);


    return 0;
}
