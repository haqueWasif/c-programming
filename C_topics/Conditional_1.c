#include<stdio.h>

int main(){
    int tk;
    scanf("%d", &tk);

    // if(tk>=100){
    //     printf("I will eat burger!");
    // }
    // else{
    //     printf("I will not eat burger!");
    // }

    /* If Else Ladder */
    if(tk>=100){
        printf("I will eat burger!");
    }
    else if(tk >= 50){
        // tk >= 50 && tk < 100
        // We dont have to specify the condition like this since the if tk >= 100 then the other conditional statements are not evaluated only the first one is executed
        printf("I will eat fujka!");
    }
    else if(tk >= 20){
        // tk >= 20 && tk < 50
        // We also dont have to specify the condition like this since this else if is only executed when the first 2 are false
        printf("I will eat ice cream!");
    }
    else{
        printf("I will not eat!");
    }

    return 0;
}