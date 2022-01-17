// call by value
// call by reference
// actual parameters(arguments)      add(5,4),add(x,y)
// when function is called, x and y are called actual parameters
// formal parameters(arguments)      int add(int a, int b){}
// when function is defined , a and b are called formal parameters


// How does this work 
// beware it's not simple as you think


// To understand this let's name the control flow as flow 0 to n.

// final note here
// we never bothered with address in this function
// so far we have used values of x and y and that's why function will never be able to
// change the value of x and y.


#include<stdio.h>


// formal parameters here
int add(int a , int b){//remember this is call by value and this function will not be able to change x,y values
    // flow 1: In main function, x,y are passed to this function
    // but actual x and y can't come to this function
    // so this function will copy the x and y value to a and b value respectively
    // a=2,b=3 and so now a, b with  value of x and y become formal parameters
    // 2,3 are copies of x and y and not the actual value itself
    printf("address of a,b inside function:%dand%d\n",&a,&b);
    return a+b;
    // this function can't change or modify x,y 
}

int main(){
    int x=3,y=2;
    printf("address of x,y inside main:%dand%d\n",&x,&y);
    // actual parameters here
    int c= add(x,y);  
    // flow 0: This is the first step, add(x,y) has actual parameters given by main function
    // main has given x,y to add function, x,y are defined in main function
    // They have scope only of main function
    // x and y have their own address and value so they can't go to the function
    printf("%d",c);
    
    return 0;
}


// this is the best way to demostrate this
// so both values of function and main have different addresses so it is clear that function is just copying the data
// address of x,y inside main:6422296and6422292
// address of a,b inside function:6422272and6422276




 