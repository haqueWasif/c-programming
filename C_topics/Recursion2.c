#include<stdio.h>

void fun(int n){
    if(n==0){
        return;
    }
    printf("fun\n");
    
    fun(n-1);
}

int main(){
    int n;
    scanf("%d", &n);

    fun(n);

    // without using n the call stack would overflow

    // So no control of recursive call causes infinite calls thus causes stack overflow

    // Stack Overflow is a runtime error

    return 0;
}

/*

Recursion -> A function that calls itself and do certain task

*/

/*

Call Stack (LIFO)


|---------|
|         |
|---------|
|  fun()  | // nth call
|---------|
|  ....   |
|---------|
|  fun()  |
|---------|
|  fun()  |
|---------|
|  fun()  |
|---------|
|  fun()  |
|---------|

// Here all the function calls are different 

*/