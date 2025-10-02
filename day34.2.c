// Delete an element from an array..

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

    printf("Enter the postion you want to delete: ");         
    scanf("%d",&b);


    if(b<0 || b>a)
    {
        printf("Invalid\n");
        return 1;
    }

    for(i=b-1; i<a; i++)
    {         
        array[i]=array[i+1];
    }                      
    a--;                            
    
    printf("After deleting: ");
    
    for(i=0; i<a; i++)
    {
        printf("%d ",array[i]);
    }
    

    return 0;
}
