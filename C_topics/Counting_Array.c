#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a+i);
    }

    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(max < a[i]){
            max = a[i];
        }
    }
    
    int count[max+1];
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        if(a[i] <= max)    
            count[a[i]]++;
    }

    for (int i = 0; i <= max; i++)
    {
        printf("%d -> %d\n", i, count[i]);
    }
    
    

    return 0;
}