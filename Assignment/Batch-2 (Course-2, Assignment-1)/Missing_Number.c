#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    
    long long int a, b, c, d, sum;
    
    for (int i = 1; i <= t; i++)
    {
        scanf("%lld %lld %lld %lld", &sum, &a, &b, &c);
        d = sum-(a+b+c);
        printf("%lld\n", d);
    }

    return 0;
}