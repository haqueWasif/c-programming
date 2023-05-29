#include<stdio.h>

int len(int i, char str[]){
    if(str[i] == '\0'){
        return 0;
    }

    int l = len(i+1, str);
    return l+1;

}

int main(){
    char str[100];
    fgets(str, 100, stdin);

    printf("%d", len(0, str));
    return 0;
}