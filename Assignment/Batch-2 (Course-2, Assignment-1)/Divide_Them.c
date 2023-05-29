#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int roll[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &roll[i]);
    }

    int k;
    scanf("%d", &k);

    for (int i = k; i < n; i++)
    {
        printf("%d " ,roll[i]);
    }

    for (int i = 0; i < k; i++)
    {
        printf("%d ", roll[i]);
    }
    
    

    
    return 0;
}