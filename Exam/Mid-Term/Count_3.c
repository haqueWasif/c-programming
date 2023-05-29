#include<stdio.h>

int main(){
    char s[1001];
    scanf("%s", s);

    int count[26] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        int index = s[i] - 'a';
        count[index]++; 
    }

    for (int i = 0;  i < 26; i++)
    {
        char ch = 'a' + i;
        printf("%c - %d\n", ch, count[i]);
    }
    
    
    return 0;
}