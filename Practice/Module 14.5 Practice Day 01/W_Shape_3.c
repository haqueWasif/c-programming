#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int space=n-1, star=1;
    for (int i = 1; i <= 2*n; i++)
    {
        for (int j = 1; j <= space+star; j++)
        {
            if(j > space){
                printf("*");
            }
            else{
                printf(" ");
            }
        }

        if(i < n){
            space--;
            star+=2;
        }
        else if(i != n){
            space++;
            star-=2;
        }
        
        printf("\n");
    }
    
    return 0;
}