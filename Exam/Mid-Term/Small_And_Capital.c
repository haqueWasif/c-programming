#include<stdio.h>

int main(){
    char s[1000];
    scanf("%s", s);

    int countC=0, countS=0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z'){
            countC++;
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            countS++;
        }
        
    }
    printf("%d %d", countC, countS);
    
    return 0;
}