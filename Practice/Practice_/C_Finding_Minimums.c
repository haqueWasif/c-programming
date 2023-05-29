#include<stdio.h>
#include<limits.h>

int calc_min(int arr[], int pos, int end){
    int min=INT_MAX;
    for (int i = pos-1; i <= end-1; i++)
    {
        if(min > arr[i]){
            min = arr[i];
        }
    }

    return min;
    
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
    }
    
    int q=n/k, r=n%k;
    
    for (int i = 0; i <= q; i++)
    {
        if(i < q){
            int min = calc_min(arr, i*k + 1, (i+1)*k);
            printf("%d ", min);
        }
        else if(r!=0){
            int min = calc_min(arr, i*k + 1, n);
            printf("%d ", min);
        }


    }
    
    return 0;
}