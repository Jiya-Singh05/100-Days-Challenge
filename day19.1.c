// Write a program to find the LCM of two numbers.

#include <stdio.h>
int main() {
    
int a,b,c,d;
printf(" Enter a number: ");
scanf("%d%d",&a,&b);

if(a%b==0)
{
    if(a>b)
    printf("lcm: %d" ,a);
   else
    printf("lcm: %d" ,b);
}

if(a%b!=0)
printf("lcm: %d", a*b);


    return 0;
}
