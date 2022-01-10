// in the previous function
// we learned about call by value function
// where call by value doesn't allow a function to change the value of
// actual parameters variables in the main function

// Here we will do call by reference.
// instead of sending values of x and y to function as actual parameters
// we will send the addresses of x and y
// now with the help of these addresses function will be able to change the
// values of x and y through main function.

#include <stdio.h>

int sum(int *a, int *b)
{

    *a = 5;
    *b = 3;
    return *a + *b;
}

int main()
{
    int x = 3, y = 4;
    printf("value of x:%d and y:%d before call by reference.\n",x,y);
    int c = sum(&x, &y);
    printf("the sum is:%d\n", c);
    printf("after function manipulation of x,y with call by reference\n");
    printf("value of x:%d and y:%d\n", x, y);

    // output
    //     the sum is:8
    // after function manipulation of x,y with call by reference
    // value of x:5 and y:3, compare with x,y value of main.


    return 0;
}