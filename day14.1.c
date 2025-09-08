//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main() {
    
int a,n,sum;
    
printf("Enter the number till which you want sum of odd numbers: ");    
scanf("%d",&n);

sum = n*n;

for(a=1;a<=n; )
printf(" %d",sum);
    

    
return 0;
}

