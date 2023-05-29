#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d", &n);

    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", A+i);
    }

    int min = INT_MAX, pos=-1;
    for (int i = 0; i < n; i++)
    {
        if(min > A[i]){
            min = A[i];
            pos = i+1;
        }
    }
    printf("%d %d", min, pos);


    
    
    
    
    return 0;
}