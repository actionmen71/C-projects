// When a pointer doesn't store anything then it's called null pointer
// Usually we use NULL keyword to assign a null pointer
// Normally in c language there are garbage value preassigned to variable
// null pointer make sure that pointer doesn't have any garbage value and generates error.

#include <stdio.h>
int main()
{

    int *pt = NULL;// pt=00000000(NULL), *pt= undefined and hence will not print anything
    int *st;
    int b = 8;
    printf("value of b:%d\n", b);//before b=8, this line printed garbage value
    printf("value of b:%p\n", b);//this line also printed garbage value which was different from above one
    printf("value of &b:%p\n", &b);// this line prints address so this address value will not change
    // value of b:8
    // value of b:00000008
    // value of &b:0061FF14
    printf("hi\n");
    printf("The garbage value stored in st is:%d\n", st);
    // The garbage value stored in st is:3862528
    printf("The garbage value stored in st is:%p\n", st);
    // The garbage value stored in st is:00358000
    printf("The garbage value stored in *st is:%p\n", *st);
    // The garbage value stored in *st is:00000000

    // printf("The value of null pointer:%d\n",*pt);
    printf("The address of null pointer:%p\n", pt);
    // The address of null pointer:00000000
    printf("bye\n");
    return 0;
}