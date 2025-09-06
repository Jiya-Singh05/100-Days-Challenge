//write a program to classify a triangle as equilateral,isosceles or scalene based on its side length

#include <stdio.h>
int main() {

int a,b,c;

printf("enter sides of triangle: ");
scanf("%d%d%d", &a,&b,&c);

if (a==b && b==c)
printf("Triangle is equilateral");
else if(a==b && a!=c||b==c && b!=a||a==c && c!=b)
printf("Triangle is isosceles");
else
printf("Triangle is scalene");



return 0;
}
