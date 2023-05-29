#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    int primarySum = 0, secondarySum = 0;
    for (int i = 0; i < n; i++)
    {
        primarySum += arr[i][i];
        secondarySum += arr[i][n-i-1];
    }

    int diff = abs(primarySum - secondarySum);
    printf("%d", diff);
    
    return 0;
}