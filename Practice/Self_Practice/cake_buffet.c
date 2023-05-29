#include<stdio.h>

int main(){
    int t, n;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        
        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", a+i);
        }

        long long int  cR=0, cS=0;
        
        for (int i = 0; i < n; i++)
        {
            if(a[i] % 2 == 0){
                cR += a[i]/2;
            }
            else{
                cS += (a[i]+1)/2;
            }   
        }
        if(cR > cS){
            printf("Shafiq\n");
        }
        else{
            printf("Rafiq\n");
        }   
    }
    return 0;

}