#include<stdio.h>
#include<string.h>

int main(){
    char s[1000];
    scanf("%s", s);

    int n = strlen(s);

    int temp;
    for (int i = n-1; i >= n/2 ; i--)
    {
        temp = s[i] - s[n-1-i];
        if(temp != 0){
            break;
        }   
    }

    if(temp == 0){
        printf("YES");
    }
    else{
        printf("NO\n");
    }
    
    return 0;
}