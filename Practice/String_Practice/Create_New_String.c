#include<stdio.h>
#include<string.h>
#define SIZE 1001

int main(){
    char s[SIZE], t[SIZE];
    scanf("%s%s", s, t);
    printf("%d %d\n%s %s", strlen(s), strlen(t), s, t);

    return 0;
}