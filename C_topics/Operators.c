#include<stdio.h>


/* Arithmetic Operators */
// Val Op Val
// +, -, *, /, %
// Remainder is always an integer

/* Relational Operators */
// Val Op Val
// <, <=, >, >=, ==, != 
// = (assigment operator) & == (relational operator)

/* Logical Operators */
// Rel Op Rel
// ||, &&

int main(){
    int a=3, b=2, rem=a%b;
    printf("%0.2f %d", a*1.0/b, rem);

    return 0;
}