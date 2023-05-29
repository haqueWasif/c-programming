#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int space=n-1, num=1;
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= num; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        
        if(i < n){ 
            space--;
            num+=2;
        }
        else{
            space++;
            num-=2;
        }
    }
    
    return 0;
}