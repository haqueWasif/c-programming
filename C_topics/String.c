#include<stdio.h>

/* String */
// It is also a part of array
// It is a character array with some special characteristics 

int main(){
    char arr[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%c", arr+i);
        // If we give input n a m e
        // Output will be n a m
        // This is because space is also a character
        // So we cannot give space we have to give input like: name
        // Then output will be name
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%c", arr[i]);
    }

    // int size = sizeof(arr)/sizeof(char);
    // printf("\nSize: %d", size);
    // To find the size of the array 
    
    
    return 0;
}