//write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
//90-100 grade A, 80-89 grade B, 70-79 grade C, 60-69 grade D , below 60 grade F

#include <stdio.h>
int main() {

int m;

printf("Enter your Percentage");
scanf("%d",&m);

if (m>=90 && m<=100)
printf("GRADE-A");
else if(m>=80 && m<=89)
printf("GRADE-B");
else if(m>=70 && m<=79)
printf("GRADE-C");
else if(m>= 60&& m<=69)
printf("GRADE-D");
else 
printf("GRADE-F");



return 0;
}
