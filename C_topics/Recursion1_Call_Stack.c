#include<stdio.h>

void world(){
    printf("World Start\n");
    printf("World End\n");
    
}

void hello(){
    printf("Hello Start\n");
    world();
    printf("Hello End\n");
}

int main(){
    printf("Main Start\n");
    hello();
    printf("Main End\n");

    return 0;
}

/*

Call Stack (LIFO)

|---------|
|         |
|         |
|         |
|---------|
| world() |
|---------|
| hello() |
|---------|
|  main() |
|---------|

// Maintains the control of all the functions in a program 

*/