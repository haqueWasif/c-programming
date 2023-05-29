#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int a, b, c, d, s;
        scanf("%d %d %d %d", &s, &a, &b, &c);
        
        d = s-a-b-c;

        printf("%d\n", d);
    }
    return 0;
}