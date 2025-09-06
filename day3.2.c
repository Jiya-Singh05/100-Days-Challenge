//write a program to swap two number using a third variable

#include <stdio.h>
int main() {

int a,b,c;
printf("enter 2 digits: ");
scanf("%d %d", &a,&b);
c=a;
a=b;
b=c;
printf("swapped number is: %d %d\n", a,b);


return 0;
}
