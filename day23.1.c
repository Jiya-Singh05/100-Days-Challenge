/Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
int main() {
    
int a,i;
float c;
float sum=0;

printf("Enter a number: ");
scanf("%d" ,&a);

for(i=1;i<=a;i++)
{
   
c=(float)((2*i)/((4*i)-1));
sum=sum+c;

}
printf("Sum is: %.2f",sum);


    return 0;
}
