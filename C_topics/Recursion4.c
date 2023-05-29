#include<stdio.h>

void printArr(int i, int n, int arr[]){
    if(i==n) return;

    printf("%d ", arr[i]);
    printArr(i+1, n, arr);

}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
    }

    printArr(0, n, arr);

    
    return 0;
}