#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n], countE=0, countO=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
        if(arr[i] % 2 == 0){
            countE++;
        }
        else{
            countO++;
        }
    }
    printf("%d %d", countE, countO);

    
    return 0;
}