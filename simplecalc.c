// Defining constants in program which doesn't change their values
// Two ways 1. const keyword 2.#define in preprocessing
// one more thing in preprocessing statements we do not require colon to end statements

#include<stdio.h>
#define pi 3.56


int main(){
    int a=4;float b=5;
    int d=3,e=3;
    int f= d+e;
    printf("The sum is:%d\n",f);

    // Constants
    const float co=4.4;
    // co=2.2; error: assignment of read-only variable 'co'
    // pi= 5.54;error: lvalue required as left operand of assignment
    printf("value of const co:%f\n",co);
    printf("value of define pi:%f\n",pi);

    
    
    printf("The sum is :%f",a+b);
    printf("\nfuck4674");
    return 0;
}