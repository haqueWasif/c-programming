#include<stdio.h>

int main(){
    char arr[5];
    scanf("%s", &arr);
    // scanf("%s", arr); (both works)
    // Taking the string as input the null character is automatically given by scanf
    printf("%s", arr);
    // If we give input string whose length is more than 5 still this will print the whole string as in windows extra memory is allocated but it will not be in case of linux
    // Also it will give error in codeforce, hacker rank like websites. So we have to keep in mind of considering the size of the array by considering the null character as well

    return 0;
}