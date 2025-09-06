//write a program to input a year and check whether it is a leap year or not 

#include <stdio.h>
int main() {

int a;
printf("Enter a YEAR: ");
scanf("%d",&a);

if (a%4==0 && a%100!=0 || a%400==0)
printf("It is a Leap year\n");
else
printf("It is a Regular year\n");



return 0;
}
