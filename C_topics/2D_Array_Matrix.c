#include<stdio.h>
#include<stdlib.h>

/*
As function argument int arr[][] cannot be used as only only dimension can be variable 
*/
void checkNull(int **arr, int r, int c){
    int isNull=1;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(arr[i][j] != 0){
                isNull = 0;
                break;
            }
        }
    }

    if(isNull == 1){
        printf("Zero Matrix!\n");
    }
    else{
        printf("Non Zero Matrix!\n");
    }

}


int checkPrimaryDiagonal(int **arr, int r, int c){
    int isPrimary=1;
    
    if(r != c) {
        isPrimary=0;
    }
    
    // primary : 00, 11, 22
    else{
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if(i == j) continue;
                if(arr[i][j] != 0) {
                    isPrimary = 0;
                    break;
                }
            }
        }
    }

    return isPrimary;
}

int checkSecondaryDiagonal(int **arr, int r, int c){
    int isSecondary=1;
    
    if(r != c) {
        isSecondary=0;
    }
    
    // secondary : 02, 11, 20
    else{
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if(i+j == c-1) continue;
                if(arr[i][j] != 0) {
                    isSecondary = 0;
                    break;
                }
            }
        }
    }

    return isSecondary;
    
}

int checkPrimaryScalar(int **arr, int r, int c){
    int isPrimary = checkPrimaryDiagonal(arr, r, c), isScalar = 1;

    int val = arr[0][0];
    if(isPrimary == 1){
        for (int i = 0; i < r; i++)
        {
            if(val != arr[i][i]){
                isScalar = 0;
                break;
            }
        }   
    }
    else{
        isScalar = 0;
    }

    return isScalar;

}

int checkSecondaryScalar(int **arr, int r, int c){
    int isSecondary = checkSecondaryDiagonal(arr,r,c), isScalar = 1;

    int val = arr[0][r-1];
    if(isSecondary == 1){
        for (int i = 0; i < r; i++)
        {
            if(val != arr[i][r-i-1]){
                isScalar = 0;
                break;
            }
        }   
    }
    else{
        isScalar = 0;
    }

    return isScalar;

}

int checkPrimaryUnit(int **arr, int r, int c){
    int isPrimary = checkPrimaryScalar(arr, r, c), isUnit=1;

    if(isPrimary == 1){
        for (int i = 0; i < r; i++)
        {
            if(arr[i][i] != 1){
                isUnit = 0;
                break;
            }
        }  
    }
    else{
        isUnit = 0;
    }

    return isUnit;

}

int checkSecondaryUnit(int **arr, int r, int c){
    int isSecondary = checkSecondaryScalar(arr, r, c), isUnit=1;

    if(isSecondary == 1){
        for (int i = 0; i < r; i++)
        {
            if(arr[i][r-i-1] != 1){
                isUnit = 0;
                break;
            }
        }  
    }
    else{
        isUnit = 0;
    }

    return isUnit;

}

void checkDiagonal(int **arr, int r, int c){
    int isPrimary = checkPrimaryDiagonal(arr, r, c), isSecondary = checkSecondaryDiagonal(arr, r, c);
    
    if(isPrimary == 1 && isSecondary == 1){
        printf("Diagonal Matrix!\n");
    }
    else if(isPrimary == 1){
        printf("Primary Diagonal Matrix!\n");
    }
    else if(isSecondary == 1){
        printf("Secondary Diagonal Matrix!\n");
    }
    else{
        printf("Non Diagonal Matrix!\n");
    }
    
}


void checkScalar(int **arr, int r, int c){
    int isPrimary = checkPrimaryScalar(arr, r, c), isSecondary = checkSecondaryScalar(arr, r, c);
    
    if(isPrimary == 1 && isSecondary == 1){
        printf("Scalar Matrix!\n");
    }
    else if(isPrimary == 1){
        printf("Primary Scalar Matrix!\n");
    }
    else if(isSecondary == 1){
        printf("Secondary Scalar Matrix!\n");
    }
    else{
        printf("Non Scalar Matrix!\n");
    }
}

void checkUnit(int **arr, int r, int c){
    int isPrimary = checkPrimaryUnit(arr, r, c), isSecondary = checkSecondaryUnit(arr, r, c);
    
    if(isPrimary == 1 && isSecondary == 1){
        printf("Unit Matrix!\n");
    }
    else if(isPrimary == 1){
        printf("Primary Unit Matrix!\n");
    }
    else if(isSecondary == 1){
        printf("Secondary Unit Matrix!\n");
    }
    else{
        printf("Non Unit Matrix!\n");
    }
}

int main(){
    int r, c;
    scanf("%d %d", &r, &c);

    int **arr = (int **) malloc(r * sizeof(int *));
    /*
        int arr[r][c];

        // This can not be used as multi-dimensional arrays and pointers type are different

    */
    for (int i = 0; i < r; i++)
    {   
        arr[i] = (int *) malloc(c * sizeof(int));

        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    checkNull(arr, r, c);
    checkDiagonal(arr, r, c);
    checkScalar(arr, r, c);
    checkUnit(arr, r, c);


    return 0;
}