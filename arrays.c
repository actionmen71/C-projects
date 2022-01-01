// So we will talking about arrays here!
// Most important things to remember

// 1. Arrays are built-in data type in C language
// 2. Arrays store homogenous data in them so each data elements has same size and takes same space
// eg: each int data element will take exactly 4 bytes of data
// 4,8,12,16 etc.
// There are three types of arrays in c:1D Array,2D Array, 3D Array
// There are mainly two types of defining 1D Array
// 1. Decalration with initialization 2. First Decalration then initialization

#include <stdio.h>

int main()
{
    int arr1[] = {1, 2, 4, 5, 6, 7, 8, 9, 45, 34};
    // First way to create array, we don't need to put array size here
    // The size of array takes automatically as we put elements in the array

    // Printing arrays can be done in two  ways
    // 1.either do it manually by printing everything using prinf statemnet
    // 2. Or by using loop statements

    printf("These array values are printed manually by print statements:\n");
    printf("%d\n", arr1[0]);
    printf("%d\n", arr1[2]);
    printf("%d\n", arr1[9]);
    printf("%d\n", arr1[10]);
    // Output 1,4,34,6422284(Notice last value is so different because it doesn't exist in the array)
    // The array size is of 10: so arr1[0] to arr1[9]. the value of arr1[10] will give the actual address no of the next block of array
    // because array are stored in contiguous memory location.
    // This last value can change

    printf("These array values are printed by for loop:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr1[i]);
    }
    printf("New array here!:\n");
    int arr2[5] = {1, 2, 4, 5, 6, 7, 8, 9, 45, 34};
    // Here we have made clear the size of array is 5
    // But we have put 10 elements in the array so it will display warning
    // but the program will still run
    // But if we want to print all the 10 elements then it will only print 5
    // and then it will repeat itslef.
    // see the print statement below how the 10th position is repeating itself.

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr2[i]);
    }
    // Output
    // 1
    // 2
    // 4
    // 5
    // 6
    // 1
    // 2
    // 4
    // 5
    // 6
    printf("new statements here\n");
    printf("%d", arr2[9]);

}