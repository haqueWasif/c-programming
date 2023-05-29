#include<stdio.h>

int calcFib(int fib0, int fib1, int n){
    printf("%d %d ", fib0, fib1);
    
    int temp = fib0;
    fib0 = fib1;
    fib1 = temp + fib1;
    n -= 2;
    
    if(n==0){
        return 0;
    }
    
    calcFib(fib1, fib0+fib1, n);
}

int main(){
    calcFib(0, 1, 10);
    return 0;
}