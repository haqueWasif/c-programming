#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int marks[n], marksH=0;
    for (int i = n; i >= 1; i--)
    {
        scanf("%d", &marks[n-i]);
        if(marksH < marks[n-i]){
            marksH = marks[n-i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", marksH-marks[i]);
    }
    

    return 0;
}