#include<stdio.h>

// As giving any statement to printf() within "" means it will show it to the screen as output
// Similarly giving statement to scanf() within "" means it will take those as input but we need to use format specifier
// And to store it to a certain variable we need to use address of operator (&) as computer knows a variable by it's address not by it's name

int main(){
    // Method 1
    // int a, b;
    // char p; 
    
    // scanf("%d%c %d%c", &a, &p, &b, &p);
    // printf("%d%% %d%%", a, b);

    // Method 2
    int a, b;
    
    scanf("%d%% %d%%", &a, &b);
    // In this method we do not want to store % to any variable
    // Since % is a special character we need to use %% for taking it as an input
    // if we had scanf("%dh %ds", &a, &b) that would mean it would expect h after first integer and s after second integer
    // So the advantage in using this method is when we do not want to store a certain character in a variable but we are given it as an input
    
    printf("%d%% %d%%", a, b);
    // if we had printf("%dh %ds", a, b) this would show output with first integer and second integer with h, s respectively
}