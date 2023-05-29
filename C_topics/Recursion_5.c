#include<stdio.h>

void print_n_to_1_reverse(int i, int n){
    if(i > n) return; // Base Case

    print_n_to_1_reverse(i+1, n);
    printf("%d ", i);
}

int main(){
    int n;
    scanf("%d", &n);

    print_n_to_1_reverse(1, n);

    return 0;
}

/*

Call Stack (LIFO)

|------------------------------|
|                              |
|------------------------------|
|                              |
|------------------------------|
| print_n_to_1_reverse(n+1, n) |
|------------------------------|
|       .........              |
|------------------------------|
| print_n_to_1_reverse(3, n)   |
|------------------------------|
| print_n_to_1_reverse(2, n)   |
|------------------------------|
| print_n_to_1_reverse(1, n)   |
|------------------------------|
|        main()                |
|------------------------------|


*/