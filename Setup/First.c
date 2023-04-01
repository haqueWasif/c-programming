#include<stdio.h> // This is called header file which contains the codes for the build-in functions like: printf(), scanf()

// main() is a user defined function with integer as return type
// The return 0 statement means the program ended successfully
// user defined functions always have their descriptions written within {} (Block)

int main(){

    printf("Hello World!");
    
    // This printf() is a build-in function
    // We can also see that this doesn't have {} (block) which is a characteristics of a build-in function
    // This printf() can have anything within "" except \, %  and will show as output to screen
    // So to print \ we need to use \\ which will print one backslash
    // Using \ will give error but using % will not give error
    // So to print % we need to use %% which will print one %
    // \n is for new line and \t is for tab
    // \t means tab which gives 4 space

    return 0;
}