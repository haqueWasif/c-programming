#include<stdio.h>


/*

In case we had input -10^9 till 10^9 ,

To find max:
then we would take max = INT_MIN
As -10^9 is what we remember the range for simplicity
but which is actually -2^32 but the result of this value is difficult to remember
so we use INT_MIN for such case 

Similarly,
To find min:
we had to use min = INT_MAX

To use INT_MIN or INT_MAX we have to include the header file limits.h

*/

int main(){
    int n;
    scanf("%d", &n);

    int max, x;
    scanf("%d", &x);
    max = x;
    for (int i = 0; i < n-1; i++)
    {
        scanf("%d", &x);
        if(max < x){
            max = x;
        }
    }

    printf("%d", max);
    
    return 0;
}