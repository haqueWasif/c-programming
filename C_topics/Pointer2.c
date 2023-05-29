#include<stdio.h>

int main(){
    long long x=100;
    long long *ptr = &x;

    printf("Address of x: %p\n", &x);
    printf("Address of x: %p\n", ptr);
    printf("Address of x: %p\n", &ptr);
    printf("Memory size of ptr: %lld\n", sizeof(ptr));

    return 0;
}