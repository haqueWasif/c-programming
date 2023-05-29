#include<stdio.h>

char small_to_capital(char small){
    char capital = small - 32;
    return capital;
}

int main(){
    char ch;
    scanf("%c", &ch);
 
    printf("%c", small_to_capital(ch));
    
    return 0;
}