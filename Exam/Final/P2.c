#include<stdio.h>

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

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
            if(i==j && arr[i][j] != 1){
                printf("NO");
                return 0;
            }
            else if(i!=j && arr[i][j] != 0){
                printf("NO");
                return 0;
            }
       }
    }

    printf("YES");

    return 0;
}