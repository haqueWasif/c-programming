#include<stdio.h>
#include<string.h>

void fun(char arr[]){ // int *arr
   arr[0] = 'G';
   
}

int main(){
    char arr[] = "Hello";
    fun(arr);
    
    printf("%s", arr);

    return 0;
}