#include<stdio.h>

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int arr1[n1], arr2[n2];
    for (int  i = 0; i < n1; i++)
    {
        scanf("%d", arr1+i);
    }
    for (int  i = 0; i < n2; i++)
    {
        scanf("%d", arr2+i);
    }

    int n = n1+n2;
    
    int arr[n];

    // Method 1
    // int i=0;
    // for(;i<n1; i++){
    //     arr[i] = arr1[i];
    // }

    // for (int j = 0; j < n2; j++)
    // {
    //     arr[i] = arr2[j];
    //     i++;
    // }
    
    // Method 2
    for (int i = 0; i < n; i++)
    {
        if(i<n1){        
            arr[i] = arr1[i];
        }
        else{
            arr[i] = arr2[i-n1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    
    return 0;
}