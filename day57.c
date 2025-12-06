//Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

//N.B:
//- Print the output for each element in a comma separated fashion.
//- Do not use Stack, use brute force approach (nested loop) to solve.
#include <stdio.h>
#define max 100
int main() 
{
    int arr[max], n, i, j, prev;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
     { scanf("%d", &arr[i]); }
    printf("Previous greater elements are:\n");
    for(i = 0; i < n; i++)
     {
        prev = -1;
        for(j = i - 1; j >= 0; j--) 
        {if(arr[j] > arr[i])
             {prev= arr[j];
                break; } }
        if(i != 0) 
        { printf(", ");  }
        printf("%d", prev); }
    printf("\n");
    return 0;
}
