//write a program to calculate simple and compound interest for given principle,rate and time.

#include <stdio.h>
#include <math.h>
int main() {

int p,t;
float r,si,ci;
printf("Enter principle amount: ");
scanf("%d",&p);
printf("Enter rate: ");
scanf("%f",&r);
printf("Enter time: ");
scanf("%d",&t);

si=(p*r*t)/100;
ci=(p*(pow((1+r/100),t))) -p;

printf("Compound interest is: %.4f\n",ci);
printf("Simple interest is: %.4f\n",si);




return 0;
}






