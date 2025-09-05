//write a program to input two numbers and display their sum, difference, product and quotient.
#include <stdio.h>
int main() {

float a,b;

printf("enter two numbers:");
scanf("%f%f" , &a,&b);

printf("The sum of two number is:%.1f\n",a+b);
printf("The difference of two number is:%.1f\n", a-b);
printf("Product of two numbers:%.1f\n", a*b);

if (b!=0)
printf("Quotient of two numbers:%.2f\n" , a/b);
else
printf("enter valid value of b");


return 0;
}
