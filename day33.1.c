//Search in a sorted array using binary search.

#include <stdio.h>
int main() {
    
int a,b,i,mid;
int f=0;

printf("Enter a number: ");
scanf("%d", &a);
int array[a];

for(i=0;i<a;i++)
{
    printf("Enter a value array[%d]: ",i);
    scanf("%d", &array[i]);
}
printf("Enter the number you want to search: ");
scanf("%d" , &b);
int low=0 , high=a-1;
while(high>=low)
{
    mid=(low+high)/2;
    if(array[mid]==b)
    {
        f=1;
        break;
    }
    else if (array[mid]>b)
    high=mid-1;
    else
    low=mid+1;
}
if(f==1)
printf("The number is at index: %d", mid);
else
printf("NUmber not found");


return 0;
}
