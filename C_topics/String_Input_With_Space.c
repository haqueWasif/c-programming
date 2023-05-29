#include<stdio.h>
#include<string.h>

int main(){
    char arr[14];
    // gets(arr); // Less secure
    fgets(arr, 14, stdin); // fgets(arr, char + \0, stdin)
    // fgets() also takes \n as input
    // fgets(arr, 100, stdin); ( This will also work as in windows extra memory is allocated when the size of the array is less than the size of input string. But better not used like this )
    printf("%s", arr);
    return 0;
}