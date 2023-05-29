#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        int arr[n], countE=0, countO=0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", arr+i);

            if(arr[i] % 2 == 0){
                countE++;
            }
            else{
                countO++;
            }
        }

        int opp=0;

        if(n % 2 != 0){
            printf("-1\n");
            continue;
        }

        else{
            for (int i = 0; i < n; i++)
            {
                while(countE != countO){
                    if(countE > countO){
                        countE--;
                        if(countE != countO){
                            countO++;
                        }
                        opp = opp + 1;                 
                    }
                    else{
                        countO--;
                        if(countE != countO){
                            countE++;
                        }
                        opp = opp + 1;
                    }
                }
            }   
        }

        printf("%d\n", opp);

    }

    return 0;
}