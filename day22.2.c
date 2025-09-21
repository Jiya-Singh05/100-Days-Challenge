//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.


#include <stdio.h>
int main() {
    
float a,i,c;
float sum=1;

printf("Enter a number: ");
scanf("%f" ,&a);

for(i=2;i<=a;i++)
{
c=(float)((2*i)-1)/(2*i);
sum=sum+c;
}
printf("Sum is: %.2f",sum);


    return 0;
}
