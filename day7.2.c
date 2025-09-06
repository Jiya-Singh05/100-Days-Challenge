//write a program to input a character and check whether it is a vowel or consonant

#include <stdio.h>
int main() {

char a;
printf("Enter an alphabet: ");
scanf("%c", &a);

if (a=='a' ||a=='e' ||a=='i' ||a=='o' ||a=='u' ||a=='A' ||a=='E' ||a=='I' ||a=='O' ||a=='U')
printf("It is a vowel\n");
else
printf("It is a consonant\n");



return 0;
}
