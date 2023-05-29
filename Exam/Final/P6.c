#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int countTiger=0, countPathan=0;
    while(n--){
        int x1, x2;
        scanf("%d %d", &x1, &x2);

        if(x1 > x2){
            countTiger++;
        }
        else if(x1 < x2){
            countPathan++;
        }
    }

    if(countTiger > countPathan){
        printf("Tiger");
    }
    else if(countTiger < countPathan){
        printf("Pathan");
    }
    else{
        printf("Draw");
    }

    return 0;
}