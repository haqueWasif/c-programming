#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    int x;

    int time=0;
    while(t--){
        scanf("%d%%", &x);
        if(x < 60){
            time = time + 60 - x;
            x = 60;
        }
 
        if(60 <= x  && x < 80){
            time = time + (80-x)*2;
            x = 80;
        }

        time = time + (100-x)*3;

        printf("%d minutes\n", time);
        time = 0;
    }

    return 0;
}