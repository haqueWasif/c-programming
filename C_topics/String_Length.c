#include<stdio.h>
#include<string.h>

int main(){
    char arr[100];

    scanf("%s", arr);

    int count=0;
    while(arr[count] != '\0'){
        count++;
    }
    printf("%d\n", count);

    /* Using built-in function */
    int len = strlen(arr);
    printf("%d", len);
    
    return 0;
}