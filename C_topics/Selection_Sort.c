#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
    }

    // Ascending Order
    for (int i = 0; i < n-1; i++)
    {   
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j]){
                int min = arr[j];
                arr[j] = arr[i];
                arr[i]= min;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Descending Order
    //  for (int i = 0; i < n-1; i++)
    // {   
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if(arr[i] < arr[j]){
    //             int max = arr[j];
    //             arr[j] = arr[i];
    //             arr[i]= max;
    //         }
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }


    

    return 0;
}