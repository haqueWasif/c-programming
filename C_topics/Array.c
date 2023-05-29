#include<stdio.h>

// int a,b,c,d,e,..... 

// So for such cases where the number of variables is large we use array

// int a[100] which allocates 100 contigous memory for the integer data type 

// For example we want 1000 variables of integer data type so we will use array

// int arr[1000] 

// Here, the name of the array arr points to the memory address of the first variable in the array
// For example, let us consider address of the first variable (i.e arr[0] ) be 410

// Then as the memory are contigously allocated (i.e: sequencially allocated) then the address of the second variable i.e ( arr[1] ) will be 410 + 1*4 ( since integer takes 4 bytes of space ). Similarly address of the third variable i.e( arr[2] ) will be 410 + 2*4. Therefore, for xth variable i.e ( arr[x] ) address will be 410 + x*4

// |410|411|412|413| -> this 4 bytes together form a block of memory for an integer variable for example, here we are taking it for the first variable in the array

int main(){
    int arr[5];
    
    // arr[5] = {10, 11, 12, 13, 14};
    
    // arr[5] = {10, 11}; ( Then the remaining 3 are set to 0 by default )
    
    // arr[5] = {10, 11, 12, 13, 14, 15}; ( the last value which is at index 5 or position 6 will not accessed by the array since the length is 5 )
    
    // If we want to initiallize an array to 0 then we can use,
    
    // arr[5] = {0};
    
    // We set the first value to 0 and the array by default sets others also to 0 ( Note: Setting others to 0 is independent of setting the first value to 0 we can set the first value to anything still it will set others to 0 )  

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", arr + i);
    }

    // Printing array first to last     
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Printing array last to first
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}