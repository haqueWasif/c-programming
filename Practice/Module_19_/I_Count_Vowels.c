#include<stdio.h>
#include<string.h>

/*

Logic:
-> Think the recursion like this
For a string of size n the recursion gives me the answer from 1 to n-1 so we can just focus for the 0th character only which will also be true for other characters

*/
int calcVowel(char str[], int i, int j){
    char vowel[] = "aeiou";
    int count = 0;
    
    if(str[i] == '\0'){
        return 0;
    }
    
    if(str[i] == vowel[j] || str[i] == vowel[j] - 32){
        count++;
        j=0;
        return count + calcVowel(str, i+1, j);
    }
    else if(vowel[j] == '\0'){
        j=0;
        calcVowel(str, i+1, j);
    }
    else{
        calcVowel(str, i, j+1);
    }
}

int main(){
    char s[201];
    fgets(s, 201, stdin);

    int count = calcVowel(s, 0, 0);
    printf("%d", count);

    
    return 0;
}