#include<stdio.h>
#include<string.h>


/* Algorithm */
// 1. Continue until you find first unmatched character
// 2. If last character of only one string is '\0' then that string is smaller
// 3. If last character of both string is '\0' then both are same

int main(){
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);

    /* Method-1: Using Loop */
    // int i=0;
    // while(1){
    //     if(s1[i] == '\0' && s2[i] == '\0'){
    //         printf("%s is lexicographically same as %s", s1, s2);
    //         break;
    //     }
    //     else if(s1[i] == '\0' || s2[i] == '\0'){
    //         if(s1[i] == '\0'){
    //             printf("%s is lexicographically smaller than %s", s1, s2);
    //         }
    //         else{
    //             printf("%s is lexicographically greater than %s", s1, s2);
    //         }
    //         break;
    //     }
        
    //     if(s1[i] == s2[i]){
    //         i++;
    //     }
    //     else{
    //         if(s1[i] > s2[i]){
    //             printf("%s is lexicographically greater than %s", s1, s2);
    //         }
    //         else{
    //             printf("%s is lexicographically smaller than %s", s1, s2);
    //         }
    //         break;
    //     } 
    // }

    /* Method 2: Build-In Function */

    if(strcmp(s1, s2) > 0){ // returns 1
        printf("%s is lexicographically greater than %s", s1, s2);
    }
    else if(strcmp(s1, s2) < 0){ // return -1
         printf("%s is lexicographically smaller than %s", s1, s2);
    }
    else{ // returns 0
        printf("%s is lexicographically same as %s", s1, s2);
    }

    return 0;
}