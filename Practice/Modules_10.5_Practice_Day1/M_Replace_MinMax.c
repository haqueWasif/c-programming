#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
    }

    int min=INT_MAX, max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(min > arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }
    }

    int i = 0;
    while(i<n){
        if(arr[i] == min){
            arr[i] = max;
        }
        else if(arr[i] == max){
            arr[i] = min;
        }
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}