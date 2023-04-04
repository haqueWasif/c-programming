#include<stdio.h>

int main(){
    int tk;

    scanf("%d", &tk);

    /* Nested If Else */
    if(tk>=5000){
        printf("I will go to Cox's Bazar!\n");
        if(tk >= 10000){
            printf("I will go to Saint Martin!");
        }
        else{
            printf("I will return home!");
        }
    }
    else{
        printf("I will not go to Cox's Bazar and Saint Martin!");
    }

    return 0;
}
