// Write a program to find the sum of digits of a number.

#include <stdio.h>
int main() {
    
int a,rem;
int sum=0;
printf(" Enter a number: ");
scanf("%d",&a);

while(a!=0)
{
rem=a%10;
sum=sum+rem;
a=a/10;
}
printf("The sum of digits of number: %d" ,sum);

    return 0;
}
