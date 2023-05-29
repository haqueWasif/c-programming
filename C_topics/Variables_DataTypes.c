#include<stdio.h>

// 1 KB = 1024 B
// 1 MB = 1024 KB
// int -> occupies 4 bytes of memory
// = (equal sign) computer understand it as assignment operator

int main(){
    int a=5;
    float b=5.0;
    char c='C';
    
    // printf(a);
    // This will give error as any statement to output must be given to printf() within "" 
    // But printf("a") will give a as output instead of the value 
    // So we use format specifier 
    // The format specifier for int data type is %d
    // Using only printf("%d") will print garbage value so we have to specify which integer we want to print so we use it like this, printf("%d", a)
    
    printf("%d %f %c \n", a, b, c);
    printf("%d %0.2f %c", a, b, c);
    // instead of %0.2f we could also use %4.2f which means take upto 2 digits after decimal and consider the length of the number at least to be 4
    // If number of digits along with decimal is less than the length specified then this will give space before the first digit
    
    return 0;
}