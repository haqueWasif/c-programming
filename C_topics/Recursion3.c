#include<stdio.h>

void print_1_to_n(int i, int n){
    if(i > n) return; // Base Case

    printf("%d ", i);
    print_1_to_n(i+1, n);
}

void print_n_to_1(int n){
    if(n < 1) return; // Base Case

    printf("%d ", n);
    print_n_to_1(n-1);
}

int main(){
    int n;
    scanf("%d", &n);

    // print_1_to_n(1, n);
    print_n_to_1(n);

    return 0;
}