//write a program to calculate the area and perimeter of a rectangle given its length and breadth

#include <stdio.h> 
int main() {

int a,b,area,perimeter; 

printf("Enter length: ");
scanf("%d",&a);
printf("Enter Breadth: ");
scanf("%d",&b);

area=a*b;
perimeter=2*(a+b);

printf("Area is:%d\n",area);
printf("Perimeter is:%d\n",perimeter);



return 0;
}
