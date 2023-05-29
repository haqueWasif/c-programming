#include<stdio.h>

void pass_by_value(int x){
    x = 20;
}

void pass_by_reference(int* x){
    *x = 20;
}

int main(){
    int a=10;

    pass_by_value(a);
    printf("%d\n", a);

    pass_by_reference(&a);
    printf("%d\n", a);

    return 0;
}