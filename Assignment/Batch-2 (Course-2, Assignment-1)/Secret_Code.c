#include<stdio.h>

int isPrime(int num){
    for (int i = 2; i*i <= num; i++)
    {
        if(num % i == 0){
            return 0;
        }
    }
    if(num == 0 || num == 1){
        return 0;
    }
    return 1;
    
}

int main(){
    int t;
    scanf("%d", &t);

    int n;
    while(t--){
        scanf("%d", &n);
        if(isPrime(n)){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}