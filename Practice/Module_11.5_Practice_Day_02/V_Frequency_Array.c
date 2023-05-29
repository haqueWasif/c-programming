#include<stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a+i);
    }

    int count[m];
    for (int i = 0; i < m; i++)
    {
        count[i] = 0; 
    }
    
    for (int i = 0; i < n; i++)
    {
        count[a[i]-1]++;
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d\n", count[i]);
    }
    
    
    return 0;
}