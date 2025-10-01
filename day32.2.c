// Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int main() {
    
int a,b,i,rem;
int max=0;
int freq[10]={0};

printf("Enter a number ");
scanf("%d", &a);

if(a<0)
{
a=-a;
}

while(a!=0)
{
rem=a%10;
freq[rem]++;
a=a/10;
}

for(i=0;i<10;i++)
{
    if(freq[i]>freq[max])
    {
    max=i;
    }
}

printf("Most occuring digit is %d", max);


    
    return 0;
}
