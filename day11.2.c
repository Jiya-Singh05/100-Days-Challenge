//write a program to find profit or loss percentage given cost price and selling price

#include <stdio.h>
int main() {

int cp,sp;
float profit,loss;

printf("Enter Cost price and Selling price respectively: \n");
scanf("%d%d", &cp,&sp);

profit= (sp-cp)*100/cp;
loss= (cp-sp)*100/cp;

if (sp>cp)
printf("profit percentage is: %.2f", profit);
else if (cp>sp)
printf("loss percentage is: %.2f", loss);
else
printf("no profit nor loss");


return 0;
}
