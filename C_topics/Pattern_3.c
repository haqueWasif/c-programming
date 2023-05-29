#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    // Method 1
    // int k = n;
    // for (int i = n; i < 2*n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if(j < k){
    //             printf(" ");
    //         }
    //         else{
    //             printf("*");
    //         }      
    //     }
    //     printf("\n"); 
    //     k--;  
    // }

    // Method 2
    int s=n-1, k=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j=1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j=1; j <= k; j++)
        {
            printf("*");
        }
        s--;
        k=k+2;
        printf("\n");
    }
    

        
    return 0;
}