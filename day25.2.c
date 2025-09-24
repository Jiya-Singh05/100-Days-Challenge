//Write a program to print the following pattern:
//*****
// ****
//  ***
//   **
//    *

#include <stdio.h>
int main() {
    
int a,i,j;  

for(i=1;i<=5;i++)
{
    for(j=1;j<i;j++)
    {
        printf(" ");
    }
    for(a=5;a>=i;a--)
    {
        printf("*");
    }
    printf("\n");
}

    return 0;
}
