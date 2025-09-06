//write a program to find and display the sum of the first n natural numbers

#include <stdio.h>
int main() {

int n,sum;
printf("Enter number till which u want the sum: ");
scanf("%d", &n);
sum=n*(n+1)/2;
printf("sum of first n natural number: %d\n",sum);


return 0;
}
