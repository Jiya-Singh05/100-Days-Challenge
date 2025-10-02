//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
int main(){
    
    int a,b,i,x;
    
 printf("Enter a number: ");
scanf("%d", &a);

int array[a];

for(i=0;i<a;i++)
{
    printf("Enter a value array[%d]: ",i);
    scanf("%d", &array[i]);
}  

    printf("Enter the element you want to insert: ");
    scanf("%d",&b);

          
    for (i=0; i<a; i++)
    {
        if (array[i]>b)
        {
            x=i;
            break;
        }
    }
    for (i=a; i>x; i--)
    {
        array[i]=array[i-1];
    }
        array[x]=b;
    a++;

    printf("Array after inserting the element:");
    
    for (i=0; i<a; i++)
    {
        printf("%d ", array[i]);
    }
    

    return 0;
}
