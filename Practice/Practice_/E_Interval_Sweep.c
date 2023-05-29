#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    int countE=0, countO=0;
    for (int i = 1; i <= 2; i++)
    {
        if(a==0 && b == 0){ break; }
        for (int j = i; j <= a+b+i-1; j++)
        {
            if(j % 2 == 0){
                countE++;
            }
            else{
                countO++;
            }
        }
        if(countO == a && countE == b){
            printf("YES");
            return 0;
        }
        else{
            countE = 0;
            countO = 0;
        } 
    }
    printf("NO");
    
    return 0;
}