#include<stdio.h>
#include<string.h>

int checkPalindrome(char str[], int i){
    int n = strlen(str);
    if(i == n/2){
        return 0;
    }
    
    int isPalindrome = checkPalindrome(str, i+1);
    if(str[i] != str[n-i-1]){
        return 0;
    }
    else{
        return isPalindrome + 1;
    }


}

int main(){
    char s[1001];
    scanf("%s", s);

    int isPalindrome = checkPalindrome(s, 0);
    
    if(isPalindrome == strlen(s) / 2){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}