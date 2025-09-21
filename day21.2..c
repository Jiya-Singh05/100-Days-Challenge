//Write a program to check if a number is a perfect number.

#include <stdio.h>
int main() {
    
int a,b,c,i;
int sum=0;
printf(" Enter a number: ");
scanf("%d",&a);
b=a;

for(i=1;i<a;i++)
{
    if(a%i==0)
    {
    sum=sum+i;
    }

}
if (sum==b)
printf("It is a perfect number");
else
printf("Not a perfect number");

    return 0;
}
