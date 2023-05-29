#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int v, sumE=0, sumO=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v);
        if(v % 2 == 0){
            sumE += v;
        }
        else{
            sumO += v;
        }
    }
    printf("%d %d", sumE, sumO);
    

    
    return 0;
}