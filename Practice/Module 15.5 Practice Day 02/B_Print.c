#include<stdio.h>

void printNum(int n){
    for (int i = 1; i <= n; i++)
    {
        if(i==n){
            printf("%d", i);
            return;
        }
        printf("%d ", i);
    }
    
}

int main(){
    int n;
    scanf("%d", &n);

    printNum(n);

    return 0;
}