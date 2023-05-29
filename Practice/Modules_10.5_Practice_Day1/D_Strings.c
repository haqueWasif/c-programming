#include<stdio.h>
#include<string.h>

int main(){
    char a[10], b[10];
    scanf("%s%s", a, b);

    int lenA = strlen(a), lenB=strlen(b); 
    printf("%d %d\n", lenA, lenB);

    char s[20];
    int lenS = lenA + lenB;
    for (int i = 0; i < lenA; i++)
    {
        s[i] = a[i];
    }
    
    for (int i = 0; i < lenB; i++)
    {
        s[i+lenA] = b[i];
    }
    s[lenS] = '\0';
    
    printf("%s\n", s);

    char temp=a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s", a, b);



    return 0;
}