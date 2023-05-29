#include<stdio.h>

int main(){
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }  
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
         
    }
    
    return 0;
}

/*
arr[5][4]

-> this means create 5 arrays of size 4

      _0___1___2___3__
   0 |___|___|___|___|
   1 |___|___|___|___|
   2 |___|___|___|___|
   3 |___|___|___|___|   
   4 |___|___|___|___|

*/