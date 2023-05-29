#include<stdio.h>

/*

-- While accessing --
arr[i] -> *(arr+i)
i[arr] -> *(i+arr)

-- In declaration --
int arr[] -> int *arr

*/

void fun(int arr[]){ // int *arr
    int size = sizeof(arr)/sizeof(int);
    printf("%d\n", size);
    // Only the address of the 0th element of the array is known no track for the total size
}

/*

Since we cannot determine size of the array from a function so we have to use another parameter for the size of the array 

*/
void fun1(int arr[], int n){ 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr+i));
    }
    
}

int main(){
    // int arr[]; This will through error but not when used in function parameter because there this just means int *arr;
    int arr[100];

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", arr+i);
    }
    

    int size = sizeof(arr)/sizeof(int);
    printf("%d\n", size);
    // Total size can be known as here there is a track for the total size as well as the 0th element
    
    fun(arr);
    fun1(arr, n);
    
    

    return 0;
}