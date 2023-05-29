#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int f = n%10, l=(n/10)%10;
    if(f % l == 0 || l % f == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}