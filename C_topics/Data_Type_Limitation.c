#include<stdio.h>

// int -> takes 4 bytes
// long long int -> takes 8 bytes

// float -> takes 4 bytes
// double -> takes 8 bytes

/*

For 2 bits:
00 -> 0
01 -> 1
10 -> 2
11 -> 3

For 3 bits:
000 -> 0
001 -> 1
010 -> 2
011 -> 3
100 -> 4
101 -> 5
110 -> 6
111 -> 7

here we can see a pattern for 2 bits we have 0 to 3

again, for 3 bits we have 0 to 7

so we can see for n bits we have 0 to (2^n)-1

For int data type:
int -> takes 4 bytes
4 bytes = 32 bits

so it takes values till (2^32)-1
but since it also takes negative values so it takes value from range -2^32 to (2^32)-1

But for calculation purpose we can remember it like this

for int it takes:
-10^9 to 10^9 values
// Maximum 2^32 but since we have to calculate it so we consider the minimum of that number which is 10^9 since 2^32 has 10 digits 

for long long int it takes:
-10^18 to 10^18 values 
// Maximum 2^64 but since we have to calculate it so we consider the minimum of that number which is 10^18 since 2^64 has 20 digits 

(Not 10^19 because it also takes negative values)
*/
int main(){
    int a = 1000000000; 
    
    long long int b = 1000000000000000000;
    printf("%d\n", a);
    printf("%lld\n", b);

    // float c = 1234.5634997; 
    // Using float here will give random value instead of 997 at end
    // So we need to use double here
    // double c = 1234.5634997;
    double c = 1.234567891234567;
    printf("%0.15lf\n", c);
    // So double can take total 16 digits considering before and after decimal

    // So whether to use float or double depends on how correct answer we required if we need the exact value we should use double

    return 0;
}