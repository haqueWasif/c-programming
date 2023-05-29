#include<stdio.h>
 
int main(){
    int a[3];  
    
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", a+i);
    }
    
    int max = a[0];
    for (int i = 1; i < 3; i++)
    {
        if(max < a[i]){
            max = a[i];
        }
    }

    int min = a[0];
    for (int i = 1; i < 3; i++)
    {
        if(min > a[i]){
            min = a[i];
        }
    }
    

    printf("%d %d", min, max);   

}