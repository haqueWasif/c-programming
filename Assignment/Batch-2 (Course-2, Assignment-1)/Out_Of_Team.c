#include<stdio.h>

int main(){
    int n, k, run;

    scanf("%d %d", &n, &k);

    int out=0;
    while(n--){
        scanf("%d", &run);
        if(run < k){
            out++;
        }

    }
    printf("%d", out);

    return 0;
}