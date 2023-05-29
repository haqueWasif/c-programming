#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);

    long long int arr[n];
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", arr + i);
        sum += arr[i];
    }
    printf("%lld", abs(sum));
    return 0;
}