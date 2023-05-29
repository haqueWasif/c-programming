#include<stdio.h>
#include<string.h>

void countChar(char str[], int* capital, int* small, int* space){
    
}

int main(){
    char s[1001];
    fgets(s, 1001, stdin);

    int countCapital=0, countSmall=0, countSpace=0;

    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z'){
            countCapital++;
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            countSmall++;
        }
        else{
            countSpace++;
        }
    }

    printf("Capital - %d\nSmall - %d\nSpaces - %d", countCapital, countSmall, countSpace);

    return 0;
}