#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int arr[n];
    // Note: 
    // arr[n] = {} -> will give an error. We cannot initiallize a variable sized array


    for (int i = 0; i < 5; i++)
    {
        scanf("%d", arr + i);
    }

    // Printing array first to last
    printf("Array: ");   
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");


    // Printing array last to first
    printf("Reverse Array: ");   
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");


    // Sum of an array
    int sum = 0;
    printf("Sum: ");   
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("%d", sum);

    return 0;
}