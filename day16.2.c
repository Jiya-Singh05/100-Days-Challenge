//Write a program to check if a number is a palindrome.

#include <stdio.h>
int main () {
    
int a,rem;
int rev=0;

printf("Enter a number you want to check: ");
scanf("%d", &a);
int n=a;
  
while(a!=0)
{
    rem=a%10;
    rev=rev*10+rem;
    a=a/10;
}

if(n==rev)
printf("It is a palindrome");
else
printf("It is not a palindrome");    
    
    
    
    return 0;
}
