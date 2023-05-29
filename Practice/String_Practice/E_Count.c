#include<stdio.h>
#define SIZE 1000001
int main(){
    char s[SIZE];
    scanf("%s", s);

    int sum=0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        sum += s[i] - '0';
    }
    
    printf("%d", sum);
    return 0;
}