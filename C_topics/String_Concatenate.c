#include<stdio.h>
#include<string.h>

int main(){
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);

    /* Method 1: Using loop */
    // int len1=strlen(s1), len2=strlen(s2);
    // for (int i = 0; i <= len2; i++)
    // {
    //     s1[len1+i]=s2[i];
    // }
    // printf("%s", s1);

    /* Method 2: Using Build-In Function */
    strcat(s1, s2);
    printf("%s", s1);
    
    return 0;
}