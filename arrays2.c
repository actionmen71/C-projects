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

    // Only in this type of declaration do we need to enter the array value one by one
    // so we use loop most of the time.

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value for arr[%d]", i);
        scanf("%d", &arr2[i]);
    }
    // output
    // Enter the value for arr[0]1
    // Enter the value for arr[1]2
    // Enter the value for arr[2]3
    // Enter the value for arr[3]4
    // Enter the value for arr[4]5

    printf("Array 2 starts here!:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr2[i]);
    }
    return 0;
}
