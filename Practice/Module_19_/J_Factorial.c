#include<stdio.h>
#define ll long long int

ll fact(int n){
    if(n==0){
        return 1;
    }

    return n * fact(n-1);

}

int main(){
    int n;
    scanf("%d", &n);

    ll val = fact(n);
    printf("%lld", val);

    return 0;
}