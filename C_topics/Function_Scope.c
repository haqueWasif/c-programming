#include<stdio.h>

// global variable
int x=100;

void fun(){
    int s=100;
    printf("Address of s in fun: %p\n", &s);

    printf("\nAddress of x in fun: %p\n", &x);

}
int main(){
    int s=200;
    printf("Address of s in main: %p\n", &s);
    fun();

    // global variable are access in the same way throughout the program
    printf("Address of x in main: %p\n", &x);
    return 0;
}