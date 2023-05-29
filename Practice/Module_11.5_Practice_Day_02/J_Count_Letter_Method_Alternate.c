#include<stdio.h>
#include<string.h>
 
#define SIZE 10000001
// size of array can be maximum 10^6
// But for the above ques this can work in code blocks

 
int main(){
    char s[SIZE];
    scanf("%s", s);
 
    int n = strlen(s);
    // You need to store the length in a variable
    // Otherwise using strlen() directly inplace of the variable in loop will give time limit exceed error

    int count[26];
 
    for (int i = 0; i < n; i++)
    {
        count[s[i] - 'a']++;
    }
 
    for (int i = 0; i < 26; i++)
    {   
        if(count[i] > 0){
            printf("%c : %d\n", 'a' + i, count[i]);
        }
        
    }
    
    return 0;
}