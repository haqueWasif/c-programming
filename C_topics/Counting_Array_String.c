#include<stdio.h>
#include<string.h>

int main(){
    char a[100];
    scanf("%s", a);

    int count['z'-'A'+1] = {0};
    
    for (int i = 0; i < strlen(a); i++)
    {
        int index = a[i] - 'A';
        count[index]++;
    }

    for (int i = 0; i < strlen(a); i++)
    {
        int index = a[i] - 'A';
        if(count[index] != 0){
            printf("%c -> %d\n", 'A'+index, count[index]);
            count[index] = 0; 
        }
    }
    
    

    return 0;
}