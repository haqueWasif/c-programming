#include<stdio.h>
#define SIZE 100000
int main(){
    char s[SIZE];
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ','){
            s[i] = ' ';
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + 32;
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 32;
        }
    }

    printf("%s", s);
    
    return 0;
}