// Insert an element in an array at a given position.

#include <stdio.h>
int main(){
    
    int a,b,x,i;
    
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

    printf("Enter the position where you want to insert the element:");
    scanf("%d",&x);

    if(x<0 || x>a)
    {
        printf("Invalid");
        return 1;          
    }

    for(i=a; i>x; i--)
    {         
        array[i]=array[i-1];
    }
    array[x]=b;                      
    a++;                            
    
    printf("After inserting: ");
    
    for(i=0; i<a; i++)
    {
        printf("%d ",array[i]);
    }
    

    return 0;
}
