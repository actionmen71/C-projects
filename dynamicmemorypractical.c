#include <stdio.h>
#include <stdlib.h> //for dynamic memory allocation

// IMPORTANT!!!!
//two programs are there
// 1. it shows just how dyanmic allocation work with malloc
// here we created array with dynamic memory and printed the array
// 2. it takes array size from user during runtime and then create array
// this is real example of dynamic memory allocation during runtime.

// int main()
// {
//     int *pointer;
//     int i;
//     pointer = (int *)malloc(3 * sizeof(int));
//     // above line will create integer array of size 3 but not in contiguous way in heap memory
//     // pointer[3]={};
//     for (i = 0; i < 3; i++)
//     {
//         printf("enter the value fo %d:\n", i);
//         scanf("%d", &pointer[i]);
//     }
//     for (i = 0; i < 3; i++)
//     {

//         printf("value at %d:%d\n", i, pointer[i]);
//     }
//     // output
//     // enter the value fo 0:
//     // 43
//     // enter the value fo 1:
//     // 34
//     // enter the value fo 2:
//     // 3
//     // value at 0:43
//     // value at 1:34
//     // value at 2:3

//     return 0;
// }

int main()
{
    int *pointer;
    int i, n;
    printf("enter the size of array you want to create:\n");
    scanf("%d", &n); //see with this input we can change the array size each time program is run
    // dynamic allocation during run time, not possible in traditional way
    //after compilation size was fixed but here we can change during runtime
    pointer = (int *)malloc(n * sizeof(int));

    // suppose here we have commented this below code segment so that we don't give any input
    // output
    // value at 0:12786352
    // pointer address is12786560
    // :value at 1:12779712
    // pointer address is12786564
    // :value at 2:1124087853
    // pointer address is12786568
    // :value at 3:1380928591
    // pointer address is12786572
    // :value at 4:1297237332
    // pointer address is12786576

    // we see that if we don't put any value then there is garabage value but in calloc case it will be 0

    for (i = 0; i < n; i++)
    {
        printf("enter the value fo %d:\n", i);
        scanf("%d", &pointer[i]);
    }
    for (i = 0; i < n; i++)
    {

        printf("value at %d:%d\n", i, pointer[i]);
        printf("pointer address is%d\n:", &pointer[i]);
    }

    free(pointer);
    // always use this at the end of program to free memory space
    return 0;
}