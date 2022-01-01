#include <stdio.h>

int main()
{
    // So now we have seen first way to define array and two ways to print 1D arrays. we will move on second method

    int arr2[5];
    //  Here we decalre the array with array size
    // we have to give array size here compulsory or it will not run

    arr2[1] = 10;
    // if we don't give value to array then it will print addresses
    // output
    // 6422400
    // 10
    // 4200928
    // 4199120
    // 2711552

    // 

    printf("Array 2 starts here!:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr2[i]);
    }
    return 0;
}
