#include<stdio.h>

int main(){
    char s[1001];
    scanf("%s", s);

    int countV=0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        char v[] = {'a', 'e', 'i', 'o', 'u'};
        for (int j = 0; j < 5; j++)
        {
            if(s[i] == v[j]){
                countV++;
                break;
            }
        }
    }
    printf("%d", countV);
    
    return 0;
}