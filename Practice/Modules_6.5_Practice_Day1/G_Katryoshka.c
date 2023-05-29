#include<stdio.h>

int main(){
    long long int n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    long long int min = n;

    if(min > m){
        min = m;
    }
    if(min > k){
        min = k;
    }

    long long int nK;

    if(min == n){
        nK = n;
    }
    else if(min == k){
        nK = k;
    }
    else{
        nK = m;

        long long int min2 = n-m;
        
        if(min2/2 >= k-m){
            min2 = k-m;
            nK = nK + min2;
        }
        else if(min2/2 < k-m){
            nK = nK + min2/2;
        }   
    }

    printf("%lld", nK);
    
    return 0;
}