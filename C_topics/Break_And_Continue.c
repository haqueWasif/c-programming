#include<stdio.h>

int main(){
    int n, sum=0;

    scanf("%d", &n);

    printf("This is after using break statement:\n");

    for (int i = 1; i <= n; i++)
    {
        if(i==5){
            break;
        }
        printf("%d\n", i);
    }

    printf("\nThis is after using continue statement:\n");

    for (int i = 1; i <= n; i++)
    {
        if(i==5){
            continue;
        }
        printf("%d\n", i);
    }


    return 0;
}