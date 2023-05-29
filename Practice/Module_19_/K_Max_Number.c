#include<stdio.h>
#include<limits.h>

int calcMax(int arr[], int i, int n){
    if(i==n){
        return INT_MIN;
    }
 
    int max = calcMax(arr, i+1, n);
    
    if(arr[i] > max){
        return arr[i];
    }
    return max;
 
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
    }

    int max = calcMax(arr, 0, n);
    printf("%d", max);
    
    return 0;
}