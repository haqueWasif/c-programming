#include<stdio.h>

void sort(int arr[], int n){
    int sortedArr[n];
    for (int i = 0; i < n; i++)
    {
        sortedArr[i] = arr[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {   
        for (int j = i+1; j < n; j++)
        {
            if(sortedArr[i] > sortedArr[j]){
                int temp = sortedArr[i];
                sortedArr[i] = sortedArr[j];
                sortedArr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", sortedArr[i]);
    }
    printf("\n");
}

int main(){
    int n = 3;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
    }

    sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    

    return 0;
}