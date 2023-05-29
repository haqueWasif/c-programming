#include<stdio.h>
#include<stdlib.h>


void Arrsum(int** A, int** B, int** S, int i, int j, int r, int c){
    S[i][j] = A[i][j] + B[i][j];

    if(i <= r-1 && j < c-1){
        Arrsum(A, B, S, i, j+1, r, c);
    }
    else if(i < r-1){
        j=0;
        Arrsum(A, B, S, i+1, j, r, c);
    }
}

int main(){
    int r, c;
    scanf("%d %d", &r, &c);

    int** A = (int**) malloc(r*sizeof(int**)); 
    int** B = (int**) malloc(r*sizeof(int**));
    int** S = (int**) malloc(r*sizeof(int**));

    for (int i = 0; i < r; i++)
    {
        A[i] = (int*) malloc(c*sizeof(int*));
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        B[i] = (int*) malloc(c*sizeof(int*));
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        S[i] = (int*) malloc(c*sizeof(int*));
    }

    Arrsum(A, B, S, 0, 0, r, c);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", S[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++)
    {
       free(A[i]);
       free(B[i]);
       free(S[i]);
    }

    free(A);
    free(B);
    free(S);

    
    return 0;
}