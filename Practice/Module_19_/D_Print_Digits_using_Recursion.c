#include<stdio.h>


void printNum(int n){

    if(n >= 10){
        printNum(n/10);
    }

    int rem = n % 10;
    printf("%d ", rem);

}
int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        printNum(n);
        printf("\n");
    }

    return 0;
}