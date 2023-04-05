#include<stdio.h>

int main(){
    int n, sumF=0, sumW=0, sumDW=0;

    scanf("%d", &n);

    int i;
    for (i = 1; i <= n; i++)
    {
        sumF += i;
    }

    printf("Sum of numbers from 1 to %d is %d\n", n, sumF);

    i=1;
    while(i<=n){
        sumW += i;
        i++;
    }

    printf("Sum of numbers from 1 to %d is %d\n", n, sumW);

    i=1;
    do{ // Difference between this and other loops is that this runs at least one time
        sumDW +=i;
        i++;
    }while(i<=n);

    printf("Sum of numbers from 1 to %d is %d\n", n, sumDW);

    // sum = n*(n+1)/2;
    return 0;
}