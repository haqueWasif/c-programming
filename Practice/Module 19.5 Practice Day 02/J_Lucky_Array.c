#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a+i);
    }

    int min=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(a[i] < min){
            min = a[i];
        }
    }
    
    int countMin=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == min){
            countMin++;
        }
    }

    if(countMin % 2 != 0){
        printf("Lucky");
    }
    else{
        printf("Unlucky");
    }
    
    
    return 0;
}