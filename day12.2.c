// Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit , Next 100 units at ₹7/unit , Next 100 units at ₹10/unit, above at ₹12/unit

#include <stdio.h>
int main() {
    
int a;

printf("Enter your units consumed: ");
scanf("%d", &a);

if(a<=100)
printf("Your electricity bill is: %d", a*5);
else if (a>100 && a<=200)
printf("Your electricity bill is: %d", (100*5)+(a*7));
else if (a>200 && a<=300)
printf("Your electricity bill is: %d", (100*5)+(100*7)+(a*10));
else
printf("Your electricity bill is: %d", (100*5)+(100*7)+(100*10)+(a*12));



    return 0;
}
