//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main() {
    
int a,complement,c,rem; 
printf("Enter a binary number: ");
scanf("%d", &a);
printf("Complementary number is: ");

while(a!=0)
{
    rem=a%10;
    if(rem==1)
    {
    complement=0;
    }
    else if(rem==0)
    {
    complement=1;
    }
    else
    {
    printf("INVALID");
    return 1;
    }
    a=a/10;
    
    printf("%d", complement);
}
    
    

    return 0;
}
