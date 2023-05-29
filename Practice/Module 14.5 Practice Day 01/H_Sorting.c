#include<stdio.h>
#include<limits.h>

void swap(int* val1, int* val2){
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

void selectionSort(int n, int* arr){
    for (int i = 0; i < n-1; i++)
    {
        int min_pos = i;
        for (int j = i+1; j < n; j++)
        {
           if(arr[min_pos] > arr[j]){
                min_pos = j;
            } 
        }
        swap(arr + i, arr + min_pos);
    }
}

void bubbleSort(int n, int* arr){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           if(arr[i] > arr[j]){
                swap(arr + i, arr + j);
            } 
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
    }
    
    // selectionSort(n, arr);
    bubbleSort(n, arr);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}