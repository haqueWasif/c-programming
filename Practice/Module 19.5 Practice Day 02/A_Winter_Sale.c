#include<stdio.h>

int main(){
    float discount, priceAfter, priceBefore;
    scanf("%f %f", &discount, &priceAfter);

    priceBefore = (100 / (100 - discount)) * priceAfter;
    printf("%0.2f", priceBefore);

    return 0;
}