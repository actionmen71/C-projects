#include<stdio.h>
// this program will not run itself because main method is changed
// this program file is meant to be included in another program to lend its function and methods

int funadd(int a,int b){
    return a+b;
}

int returnv(){
    return 45;
}


int main2(){
    int a,b;
    a=4;
    b=3;
    int c=funadd(a,b);
    printf("%d",c);

    
    return 0;
}