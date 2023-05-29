#include<stdio.h>
#include<limits.h>

#define SIZE 100000
#define ll long long int


int calc_max(int a[], int n){
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if(max < a[i]){
            max = a[i];
        }
    }
    
    return max;
}

int main(){
    int n;
    scanf("%d", &n);

    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", arr+i);
    }

    int countArr[SIZE] = {};
    for (int i = 0; i < n; i++)
    {   
        ll temp = arr[i];

        while(temp % 2 == 0){
            countArr[i]++;
            temp = temp / 2;
        }  
    }

    int max = calc_max(countArr, n);
    printf("%d", max);
    
    
    return 0;
}