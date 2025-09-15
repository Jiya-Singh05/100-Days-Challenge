// Write a program to print all factors of a given number.

#include <stdio.h>
int main() {
    
int a,b,i;
printf(" Enter a number: ");
scanf("%d",&a);

for(i=1;i<=a;i++)
{
    if(a%i==0)
    printf("%d\n",i);

}


    return 0;
}
