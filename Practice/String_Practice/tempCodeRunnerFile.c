#include<stdio.h>
#define SIZE 1000000
int main(){
    char s[SIZE];
    fgets(s, SIZE, stdin);
    for (int i = 0; s[i] != '\\'; i++)
    {
        printf("%c", s[i]);
    }
    
    return 0;
}