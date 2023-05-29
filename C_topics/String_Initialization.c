#include<stdio.h>

int main(){
 // char arr[] = {'W', 'a', 's', 'i', 'f'};
 // char arr[] = {'W', 'a', 's', 'i', 'f', '\0'};
// char arr[6] = "Wasif"; // Guarantee last character is \0
// char arr[6] = {'W', 'a', 's', 'i', 'f'}; // No guarantee last character is \0
char arr[] = "Wasif";
// char arr[5] = "Wasif" /* Will give random value after f */ 

// "" by default gives a \0 character 
    
    /* Method 1: To print string */
    printf("%s", arr);

    /* Method 2: To print string */
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c", arr[i]);
    // }
    
        

    return 0;
}