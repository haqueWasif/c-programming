#include<stdio.h>
#include<string.h>

void fun(char arr[]){ // char *arr
    int size = sizeof(arr) / sizeof(char);
    printf("%d\n", size);

    printf("%d\n", strlen(arr));
}

/*

As we can determine the length of the string from func so we do not have to use another parameter in fun for the length of the string

*/

int main(){
    char arr[20] = "Hello";

    int size = sizeof(arr) / sizeof(char);
    printf("%d\n", size);
    
    fun(arr);

    return 0;
}