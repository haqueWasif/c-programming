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

    

    for (int i = 0; i < n; i++)
    {
       int lim = ceil( (i-1)*1.0 / 2);
       
       if(arr[i] == 0){
            for (int j = 0; j < lim; j++)
            {
                int temp = arr[i-1-j];
                arr[i-1-j] = arr[j];
                arr[j] = temp;
            }
       }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}