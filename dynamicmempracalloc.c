// here we are using dynamic memory allocation using calloc function
// no difference in code than malloc but minor changes
// the result will be in the way how data is stored
// it can only be checked when printed using addresses

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pointer;
    int i, n;
    printf("enter the size of array you want to create:\n");
    scanf("%d", &n);
    pointer = (int *)calloc(n, sizeof(int)); //here is the only change(, a comma)with malloc program

    // suppose here we have commented this below code segment so that we don't give any input
    // output
    // value at 0:0
    // pointer address is138112
    // :value at 1:0
    // pointer address is138116
    // :value at 2:0
    // pointer address is138120
    // :value at 3:0
    // pointer address is138124
    // :value at 4:0
    // pointer address is138128

    // unlike malloc here we have initialize value ot each position
    // this take overhead in programming so recommended not to use if no value is given

    for (i = 0; i < n; i++)
    {
        printf("enter the value for %d:\n", i);
        scanf("%d", &pointer[i]);
    }
    for (i = 0; i < n; i++)
    {

        printf("value at %d:%d\n", i, pointer[i]);
        printf("pointer address is%d\n:", &pointer[i]);
    }

    printf("enter the size of array for realloc you want to create:\n");
    scanf("%d", &n);
    pointer = (int *)realloc(pointer, n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("enter the new value for %d:\n", i);
        scanf("%d", &pointer[i]);
    }
    for (i = 0; i < n; i++)
    {

        printf("New value at %d:%d\n", i, pointer[i]);
        printf("New pointer address is%d\n:", &pointer[i]);
    }

    // output of calloc
    // value at 0:1
    // pointer address is203648
    // :value at 1:2
    // pointer address is203652

    //output of calloc
    // New value at 0:3
    // New pointer address is203648
    // :New value at 1:4
    // New pointer address is203652
    // :New value at 2:5
    // New pointer address is203656
    // :New value at 3:6
    // New pointer address is203660

    // notice how first and second pointer address is same in realloc output
    // it means that realloc is really changing the value from start where calloc has created and then extending the size of the array

    free(pointer);
    // always use this at the end of program to free memory space
    return 0;
}