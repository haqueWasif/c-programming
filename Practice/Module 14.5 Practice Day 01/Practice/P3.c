#include<stdio.h>


int char_to_ascii(char ch){
    return ch;
}

int main(){
    char ch;
    scanf("%c", &ch);

    int ascii = char_to_ascii(ch);
    printf("%d", ascii);
    
    return 0;
}