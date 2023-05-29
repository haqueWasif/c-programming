#include<stdio.h>
#include<limits.h>

int max(int arr[], int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int n){
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
    }

    printf("%d %d", min(arr, n), max(arr, n));
    
    return 0;
}