#include<stdio.h>

char capital_to_small(char capital){
    char small = capital + 32;
    return small;
}

int main(){
    char ch;
    scanf("%c", &ch);
 
    printf("%c", capital_to_small(ch));
    
    return 0;
}