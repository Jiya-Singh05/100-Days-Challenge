// Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>
int main() {
    
int a,b,c,d;
printf(" Enter a number: ");
scanf("%d%d",&a,&b);

c=a%b;
d=b%a;

if(a>b)
printf("gcd of two numbers are: %d",c);
else
printf("gcd of two numbers are: %d" ,d);

    return 0;
}
