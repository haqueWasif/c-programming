#include<stdio.h>

int main(){
    long long int n;
    scanf("%lld", &n);

    long long int uH;
    uH = n*(n-1)/2;

    printf("%lld", uH);
    
    return 0;
}