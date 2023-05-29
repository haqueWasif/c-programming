#include<stdio.h>

int main(){
    int x=100;
    int *ptr = &x;

    printf("Address of x: %p\n", &x);
    printf("Address of x: %p\n", ptr);
    printf("Address of x: %p\n", &ptr);
    printf("Memory size of ptr: %d\n", sizeof(ptr));

    printf("Value of x: %d\n", x);
    printf("Value of x: %d\n", *ptr);

    x = 200;
    printf("Value of x: %d\n", x);
    printf("Value of x: %d\n", *ptr);

    *ptr = 300;
    printf("Value of x: %d\n", x);
    printf("Value of x: %d\n", *ptr);


    return 0;
}