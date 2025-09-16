// Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main() {
    
int a;
int b=1;
int product=1;
int rem;
printf("Enter a number: ");
scanf("%d" ,&a);

while(a!=0)
{
    
  rem=a%10;
  if(rem%2!=0)
  {
  product=product*rem;
  b=0;
  }
  a=a/10;
}

if(b==0)
printf("The product of odd numbers of the entered number is: %d" ,product);
else
printf("No odd numbers FOUND");



    return 0;
}
