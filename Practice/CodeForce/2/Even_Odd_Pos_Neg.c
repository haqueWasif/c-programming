#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int checkEven=0, checkOdd=0, checkPos=0, checkNeg=0;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        
        if(x % 2 == 0){
            checkEven++;
        }
        else{
            checkOdd++; 
        }
        if(x > 0){
            checkPos++;
        }
        else if(x < 0){
            checkNeg++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", checkEven, checkOdd, checkPos, checkNeg);
    
    return 0;
}