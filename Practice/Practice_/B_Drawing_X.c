#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int backS=1, forwardS=n;
    for (int i = 1; i <= n; i++)
    {        
        for (int j = 1; j <= n; j++)
        {   
            if(j == backS && j == forwardS){
                printf("X");
            }
            else if(j == backS){
                printf("\\");
            }
            else if(j == forwardS){
                printf("/");
            }
            else{
               printf("*");    
            }    
            }

            backS++;
            forwardS--;
            printf("\n");
    }
    
    return 0;
}