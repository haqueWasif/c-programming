#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int age[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", age+i);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        int temp = age[i];
        for (int j = i+1; j < n; j++)
        {
            if(temp > age[j]){
                age[i] = age[j];
                age[j] = temp; 
                temp = age[i];
            }
        }
    }
 
    int middle;
    if(n%2 != 0){
        middle = (n+1)/2;
        printf("%d", age[middle-1]);
    }
    else{
        middle = n/2;
        printf("%d %d", age[middle-1], age[middle]);
    }

    return 0;
}
