#include<stdio.h>
#define ll long long int

ll arrSum(int arr[], int i, int n){
    if(i==n){
        return 0;
    }

    ll sum = arrSum(arr, i+1, n);

    return sum + arr[i];

}

/*
    
    Ex: n=4
    arrSum(arr, 4, 4) = 0
    arrSum(arr, 3, 4) = 0 + arr[3] = arr[3]
    arrSum(arr, 2, 4) = arr[3] + arr[2]
    arrSum(arr, 1, 4) = arr[3] + arr[2] + arr[1]
    arrSum(arr, 0, 4) = arr[3] + arr[2] + arr[1] + arr[0]

*/

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
    }
    
    arrSum(arr, 0, n);

    ll sum = arrSum(arr, 0, n);
    printf("%lld", sum);

    
    return 0;
}