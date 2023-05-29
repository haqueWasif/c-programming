#include<stdio.h>
#include<math.h>

#define ll long long int 

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        ll l, r, sum;
        scanf("%lld %lld", &l, &r);

        sum = (abs(r-l)+1) * (l+r) / 2;

        printf("%lld\n", sum);
    }
        
    
    return 0;
}