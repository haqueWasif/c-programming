#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int num;
    scanf("%d", &num);
    
    int arr[n], sum=0;
    for (int i = n-1; i >= 0; i--)
    {
        arr[i] = num % 10;
        sum += arr[i];
        num = num / 10;
    }
    
    printf("%d", sum);
    
    return 0;
}