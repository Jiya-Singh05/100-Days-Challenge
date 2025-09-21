//Write a program to check a number is a strong number.

#include <stdio.h>
int main() {
    
int a,b,c,i;
int sum=0;

printf("Enter a number: ");
scanf("%d" ,&a);
c=a;

while(a!=0)
{
b=a%10;
int f=1;

for(i=1;i<=b;i++)
{
f=f*i;
}

sum=sum+f;
a=a/10;
}

if(sum==c)
printf("It is a strong number");
else
printf("It is not a strong number");


    return 0;
}
