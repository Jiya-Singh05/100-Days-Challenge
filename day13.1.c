//Write a program to implement a basic calculator using switch-case for +, -, *, /,%

#include <stdio.h>
int main() {
    
float divi;
int a,b,o,sum,diff,mul,mod;

printf("Enter two numbers you want to perform operations with: ");
scanf("%d%d", &a,&b);

printf("If you want to add (enter - 1), diff (enter - 2), multiply (enter - 3) , divide (enter - 4) and modulus (enter - 5) [(a+b),(a-b),(a*b),(a/b),(a%b)] \n");
scanf("%d",&o);

sum=a+b;
diff=a-b;
mul=a*b;
divi=((float)a/b);
mod=a%b;

switch (o) {
case 1:
printf("answer is: %d",sum);
break;
case 2:
printf("answer is: %d",diff);
break;
case 3:
printf("answer is: %d",mul);
break;
case 4:
if(b!=0)
printf("answer is: %f",divi);
else
printf("not defined or infinty");
break;
case 5:
printf("answer is: %d",mod);
break;
}
    
    
    

    return 0;
}
