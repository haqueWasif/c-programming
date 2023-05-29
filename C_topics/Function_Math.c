#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    double x;
    scanf("%lf", &x);

    printf("Ceil(%.2lf): %d\n", x, (int)ceil(x)); 
    printf("Floor(%.2lf): %d\n", x, (int)floor(x)); 
    printf("Round(%.2lf): %d\n", x, (int)round(x));
    printf("Sqrt(%.2lf): %.2lf\n", x, sqrt(x));
    printf("pow(%.2lf): %.2lf\n", x, pow(x, 2));

    int y;
    scanf("%d", &y);
    printf("abs(%d): %d", y, abs(y));
    // abs() is under stdlib.h 

    return 0;
}