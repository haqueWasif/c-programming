#include<stdio.h>
#include<string.h>

int main(){
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);

    /* Method 1: Building Logic */
    // for (int i = 0; i <= strlen(s2); i++)
    // {
    //     s1[i] = s2[i];
    // }

    /* Method 2: Using Build-in function */
    strcpy(s1, s2);
    
    printf("%s %s", s1, s2);

    return 0;
}