//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>  
#include <stdlib.h>
int finerepeat(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
    {  int index = abs(arr[i]); 
        if (arr[index] >= 0) 
            arr[index] = -arr[index]; 
        else
            return index; 
    } 
    return -1; 
}
int main() 
{ 
    int n, i; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array :\n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int repeat = finerepeat(arr, n); 
    if(repeat != -1)
        printf("The repeated element is: %d\n", repeat); 
    else
        printf("No repeated element found.\n");
    return 0; 
}
