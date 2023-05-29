#include<stdio.h>

int my_len(char str[]){
    int len=0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

int main(){
    char str[100];
    fgets(str, 100, stdin);

    printf("%d", my_len(str));
    
    return 0;
}