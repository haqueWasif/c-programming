#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
    }

    int lim = floor(n*1.0 / 2);

    for (int i = 1; i <= lim ; i++)
    {
        printf("%d %d ", arr[i-1], arr[n-i]);

    }
    
    if(n % 2 != 0){
        printf("%d", arr[lim]);
    }
    
    
    return 0;
}