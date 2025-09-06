//write a program to input time in seconds and convert it into hours:minutes:second format

#include <stdio.h> 
int main() {

int s,h,m;
printf("Enter time in seconds ");
scanf("%d", &s);
h=s/3600;
s=s%3600;
m=s/60;
s=s%60;

printf("converted time is- %d:%d:%d",h,m,s);













return 0;
}
