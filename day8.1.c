//write a program to input a character and check whether it is an upper case, lower case,digit or special character.

#include <stdio.h>
int main() {

char a;

printf("Enter a character: ");
scanf("%c",&a);

if (a>='a'&& a<='z')
printf("Entered character is lower case\n");
else if (a>='A'&&a<='Z')
printf("Entered character is upper case\n");
else if (a>='0' && a<='9')
printf("Entered character is a digit\n");
else
printf("Entered character is a special character\n");




return 0;
}
