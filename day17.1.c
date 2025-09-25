// Write a program to check if a number is an Armstrong number

#include <stdio.h>
int main() {
    
int a,b,d,num;
int c=0;

printf("Enter a 3 digit number: ");
scanf("%d", &a);
d=a;
while(a!=0)
{
num=a%10;
b=(num*num*num);
c=c+b;
a=a/10;
}    
    
if(c==d)  
printf("It is a armstrong number");
else
printf("It is not a armstrong number");
    

    return 0;
}
