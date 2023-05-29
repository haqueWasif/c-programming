#include<stdio.h>

int main(){
    int ar[5] = {10, 20, 30,40, 50};
    printf("Address of 0th index - %p\n", &ar[0]); 
    printf("Address of 0th index - %p\n", ar); 

    printf("Value of 0th index - %d\n", ar[0]); 
    printf("Value of 0th index - %d\n", *ar); 

    printf("Value of 1st index - %d\n", ar[1]); 
    printf("Value of 1st index - %d\n", *(ar+1)); 

    printf("Value of 1st index - %d\n", 1[ar]); 
    printf("Value of 1st index - %d\n", *(1+ar));

    /*
    
    ar[1] -> *(ar+1)
    *(ar+1) -> ar[1]
    *(1+ar) -> 1[ar]

    */

    return 0;
}