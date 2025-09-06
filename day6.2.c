//write a program to input an integer and check whether it is positive ,negative or zero

#include <stdio.h>
int main() {

int a;
printf("Enter a number: ");
scanf("%d",&a);

if (a>>0)
printf("Entered number is POSITIVE\n");
else if (a<<0)
printf("Entered number is NEGATIVE\n");
else
printf("Entered number is zero\n");




return 0;
}
