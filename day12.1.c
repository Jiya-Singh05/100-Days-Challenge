//write a program to calculate library fine based on late days a follows:
//first 5 days late: rupee 2/day, next 5 days late: rupee 4/day, next 20 days: rupee 6/day, more than 30 days : membership cancelled

#include <stdio.h>
int main() {

int a;

printf("Enter number of Delayed days: ");
scanf("%d", &a);

if (a<=5)
printf("Fine= rupee %d", 2*a);
else if (a>5 && a<=10)
printf("Fine= rupee %d",(2*5)+(a-5)*4);
else if (a>10 && a<=20)
printf("Fine= rupee %d", (2*5)+(4*5)+(a-10)*6);
else
printf("MEMBERSHIP CANCELLED");



return 0;
}
